#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 * @argc: number of argv
 * @argv: array of argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int ret = 0;

	if (argv[1] == NULL || argv[3] == NULL || atoi(argv[1]) == 0 || atoi(argv[3]) == 0 || argc != 4)
	{
		printf("Error\n");
		exit (98);
	} 
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit (98);
	}
	

	a = atoi(argv[1]);
        b = atoi(argv[3]);

	ret = (*get_op_func(argv[2]))(a, b);

	printf("%i\n", ret);
	return (0);
}
