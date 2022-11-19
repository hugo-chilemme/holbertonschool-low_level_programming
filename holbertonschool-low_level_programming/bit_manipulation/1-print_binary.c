#include "main.h"

/**
 * print_binary - Function
 * @n: decimal number
 * Description: Print the decimal number in binary
 * Return: None
 */
void print_binary(unsigned long int n)
{
	int MaxIndex = 1;
	unsigned long int RemValue = n;
	int startByOne = 0;

	if (n == 0 || !n)
	{
		_putchar('0');
		return;
	}

	MaxIndex = 65;
	while (MaxIndex >= 0)
	{
		unsigned long int Res = _pow_recursion(2, MaxIndex);

		Res = Res == 0 ? 1 : Res;
		if (RemValue >= Res)
		{
			startByOne = 1;
			_putchar('1');
			RemValue -= Res;
		}
		else if (startByOne)
		{
			_putchar('0');
		}
		MaxIndex--;
	}
}


/**
 * _pow_recursion - Entry point
 * @x: just x
 * @y: just y
 *
 * Return: Always 1 (True) or 0 (False)
 */
unsigned long int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
