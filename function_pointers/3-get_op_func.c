#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Entry point
 * @array: array of numbers
 * @size: size of @array
 * @action: out function to call array[size_t]
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

	for (; i < 7; i++)
	{
		if(ops.['+'])
			return ops->[s];
	}	
	return (op_add);
		
}
