#include "main.h"

/**
 * puts - prints extras of a spring
 * @str: the used string references
 * Return: 0
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
