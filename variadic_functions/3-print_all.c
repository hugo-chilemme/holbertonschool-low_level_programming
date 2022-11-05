#include "variadic_functions.h"

/**
 * print_f - check the code
 * @p: va_list
 * Return: Always 0.
 */
void print_f(va_list p)
{
	printf("%f", va_arg(p, double));
}

/**
 * print_c - check the code
 * @p: va_list
 * Return: Always 0.
 */
void print_c(va_list p)
{
	printf("%c", va_arg(p, int));
}

/**
 * print_s - check the code
 * @p: va_list
 * Return: Always 0.
 */
void print_s(va_list p)
{
	char *result = va_arg(p, char*);

	if (!result)
	{
		printf("(nil)");
		return;
	}
	printf("%s", result);
}

/**
 * print_i - check the code
 * @p: va_list
 * Return: Always 0.
 */
void print_i(va_list p)
{
	printf("%i", va_arg(p, int));
}

/**
 * print_all - check the code
 * @format: all format parsed
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int f = 0;
	int l = 0;
	int req_comma = 0;

	form list[] = {
		{"i", print_i},
		{"f", print_f},
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(ptr, format);

	while (format[f])
	{
		l = 0;

		if (req_comma)
			printf(", ");
		req_comma = 0;

		while (list[l].t)
		{
			if (*list[l].t == format[f])
			{
				list[l].f(ptr);
				req_comma = 1;
			}
			l++;
		}
		f++;
	}
	printf("\n");

	va_end(ptr);
}
