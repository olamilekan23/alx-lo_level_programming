#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a string
 * @s: double pointer to a string
 * @to: pointer to the string to set @s to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
