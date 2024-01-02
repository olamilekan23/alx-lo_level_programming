#include "main.h"

/**
 * swap_int - take in two variable integers and swap them
 * @author Anisah
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *b;
	*b = *a;
	*a = n;
}

