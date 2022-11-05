#ifndef MAIN_FILE
#define MAIN_FILE
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct formats - Struct dog
 *
 * @t: first letter of the type
 * @f: function execute per type
 */
typedef struct formats
{
	char *t;
	void (*f)(va_list p);
} form;
#endif
