#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Addition
 * @a: number 1
 * @b: number 2
 * Return: Always 0.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Soustraction
 * @a: number 1
 * @b: number 2
 * Return: Always 0.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplication
 * @a: number 1
 * @b: number 2
 * Return: Always 0.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division
 * @a: number 1
 * @b: number 2
 * Return: Always 0.
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}
/**
 * op_mod - Modulo
 * @a: number 1
 * @b: number 2
 * Return: Always 0.
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}
