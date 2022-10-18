#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of argv
 * @argv: array of argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));	
	return (0);
}
