#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: number of array
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;
	
	va_start(ptr, n);

	for (; i < n; i++)
	{
		printf("%i", va_arg(ptr, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
