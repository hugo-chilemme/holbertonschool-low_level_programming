#include "main.h"

/**
 * get_bit - Function
 * @n: decimal number
 * @index: get bit of index
 * Description: Print bit of index
 * Return: Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return (n >> index & 1);
}
