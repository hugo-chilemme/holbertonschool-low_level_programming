#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - point
 * @nmemb: number of size
 * @size: size of calloc
 * Return: Always 1 (True) or 0 (False)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = calloc(nmemb, size);

	if (cal == 0)
	{
		free(cal); 
		return (NULL);
	}
	return (cal);

}
