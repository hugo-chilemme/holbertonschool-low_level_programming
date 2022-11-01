#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry point
 * @name: name to print in other func
 * @f: out function
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if(f == NULL)
		return (0);
	(*f)(name);
}
