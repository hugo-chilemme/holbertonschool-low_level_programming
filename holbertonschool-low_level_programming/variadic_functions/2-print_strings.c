#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: separate value by this operator
 * @n: size of argv
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;

	va_start(ptr, n);

	for (; i < n; i++)
	{
		char *result = va_arg(ptr, char*);

		if (!result)
			printf("(nil)");
		else
			printf("%s", result);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
