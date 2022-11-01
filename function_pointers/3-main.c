#include <stdio.h>
#include "function_pointers.h"
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
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	printf("%i %s %i\n", a, argv[2], b);
	
	int ret = (*get_op_func(argv[2]))(1, 2);

	return (0);
}
