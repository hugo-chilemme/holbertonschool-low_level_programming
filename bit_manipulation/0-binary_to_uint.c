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
	int IndexMax = 0;
	unsigned int Result = 0;
	int Mul = 1;

	if (!b)
		return (0);

	for (; b[Index]; Index++)
	{
		if (b[Index] != '0' && b[Index] != '1')
			return (0);

		IndexMax++;
		Mul += (Mul * 1);
	}
	Index = 0;

	for (; Index < IndexMax; Index++)
	{
		Mul /= 2;
		if (b[Index] == '1')
			Result += Mul;
	}
	return (Result);
}
