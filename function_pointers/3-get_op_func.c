#include "function_pointers.h"
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

	for (; i < 5; i++)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
	}
	printf("Error\n");
	exit(98);
}
