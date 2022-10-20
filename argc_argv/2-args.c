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
	int index = 0;

	for (; index < argc; index++)
		printf("%s\n", argv[index]);
	return (0);
}
