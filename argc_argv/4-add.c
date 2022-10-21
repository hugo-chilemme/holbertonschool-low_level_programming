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
		int c = 0;

		for (; argv[index][c] != '\0'; c++)
		{
			if (!isdigit(argv[index][c]))
			{
				printf("Error\n");
				return (0);
			}
		}
		result += atoi(argv[index]);
	}
	printf("%i\n", result);
	return (0);
}
