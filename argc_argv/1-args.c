#include <stdio.h>

/**
 * main - check the code
 * @argc: number of argv
 * @argv: array of argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%i\n", argc - 1);
	return (0);
}
