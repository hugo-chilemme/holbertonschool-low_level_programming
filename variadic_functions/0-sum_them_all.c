#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: number of array
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int result = 0;
	unsigned int i = 0;

	va_start(ptr, n);

	for (; i < n; i++)
		result += va_arg(ptr, int);
	va_end(ptr);
	return (result);
}
