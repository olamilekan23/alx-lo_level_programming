#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return NULL;

	int i, j;
	int len = 0;
	int total_len = 0;
	char *str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		total_len += len + 1;
		len = 0;
	}

	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
		return NULL;

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len++] = av[i][j];
		}
		str[len++] = '\n';
	}

	return str;
}
