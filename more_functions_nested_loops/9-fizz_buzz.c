#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (c == 100)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}

	}

	return (0);
}
