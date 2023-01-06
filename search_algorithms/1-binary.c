#include "search_algos.h"
/**
 * binary_search - Entry point
 * @array : array
 * @size : size of @array
 * @value : find value in @array
 * Return: Always 0 (Success)
 */
int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = size - 1;
    int i = 0;
    while (left <= right)
    {
        int m = (left + right) / 2;
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            if (i == right)
                printf("%d", array[i]);
            else
                printf("%d, ", array[i]);
        }
        printf("\n");
        if (array[m] < value)
            left = m + 1;
        else if (array[m] > value)
            right = m - 1;
        else
            return m;
    }
    return -1;
}