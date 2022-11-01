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
	int ret = 0;

	if (a == 0 || b == 0 || argc != 4)
		return (0);

	ret = (*get_op_func(argv[2]))(a, b);

	printf("%i\n", ret);
	return (0);
}
