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
	int i;
	int j;
	int len = 0;
	int total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		total_len += len + 1;
	}

	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len++] = av[i][j];
		}
		str[len++] = '\n';
	}

	str[len] = '\0';

	return (str);
}
