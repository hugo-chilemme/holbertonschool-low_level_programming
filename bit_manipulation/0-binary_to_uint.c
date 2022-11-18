#include "main.h"

/**
 * binary_to_uint - Function
 * @b: binary string
 * Description: Print result in decimal
 * Return: Result
 */
unsigned int binary_to_uint(const char *b)
{
	int Index = 0;
	unsigned int Result = 0;
	unsigned int Mul = 1;

	if (!b)
		return (0);

	for (; b[Index]; Index++)
	{
		if (b[Index] != '0' && b[Index] != '1')
			return (0);
	}

	Index = strlen(b) - 1;
	for (; Index >= 0; Index--)
	{
		if (b[Index] == '1')
			Result += Mul;
		Mul += Mul;
	}
	return (Result);
}
