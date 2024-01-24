#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for integer
 * @array: array to search form
 * @size: size of array
 * @cmp: function pointers
 * Return: indef of the character
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
