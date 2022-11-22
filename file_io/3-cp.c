#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    	int src;
	int dest;
	char *buffer;
	int size = 0;

	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(av[1], O_RDONLY | O_WRONLY, 0664);

	if (src == -1)
	{
		printf("Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	
	dest = open(av[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0600);
 
	if (dest == -1)
	{
		printf("Error: Can't write to %s", av[2]);
		exit(99);
	}

	while (size != 0)
	{
		size = read(src, &buffer, 1024);
		write(dest, buffer, strlen(buffer));
	}	


	close(src);
	close(dest);
	return (dest);
}
