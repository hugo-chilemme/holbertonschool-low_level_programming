#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - Entry point
 * @s: operator (maybe)
 * Return: Always 0.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	i = ops[0].op == s ? 0 : i;
	i = ops[1].op == s && i == 0 ? 1 : i;
	i = ops[2].op == s && i == 0 ? 2 : i;
	i = ops[3].op == s && i == 0 ? 3 : i;
	i = ops[4].op == s && i == 0 ? 4 : i;
	i = ops[5].op == s && i == 0 ? 5 : i;

	if (i == 5)
	{
		printf("Error\n");
		exit(98);
	}
	return (ops[i].f);
}
