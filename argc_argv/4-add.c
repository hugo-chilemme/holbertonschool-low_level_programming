#include <stdio.h>
#include <ctype.h>
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
	int index = 1;
	int result = 0;

	for (; index < argc; index++)
	{
		int num = atoi(argv[index]);

		if (num == 0)
		{
			printf("Error");
			return (0);
		}
		result += num;				
	}	
	printf("%i\n", result);
	return (0);
}
