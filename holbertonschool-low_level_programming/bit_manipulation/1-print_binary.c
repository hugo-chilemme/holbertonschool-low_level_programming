#include "main.h"

/**
 * print_binary - Function
 * @n: decimal number
 * Description: Print the decimal number in binary
 * Return: None
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');	
}
