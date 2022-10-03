#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lg;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lg = n % 10;
	printf("Last digit of %d is %d ", n, lg);
	if (lg > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lg == 0)
	{
		printf("and is 0\n");
	}
	else if (lg < 6 && lg != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
