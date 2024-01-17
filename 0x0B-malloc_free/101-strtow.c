#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL,
 * if str is an empty string, or if memory allocation fails.
 */
char **strtow(char *str)
{
	int i, j, k;
	int word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0';)
	{
		while (str[i] == ' ')
			i++;

		while (str[i] != ' ' && str[i] != '\0')
			i++;

		word_count++;
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	k = 0;
	words[word_count] = NULL; 

	for (i = 0; str[i] != '\0' && k < word_count;)
	{
		while (str[i] == ' ')
			i++;

		j = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;

		words[k] = malloc((i - j + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			while (k > 0)
				free(words[--k]);
			free(words);
			return (NULL);
		}
		for (; j < i; j++)
			words[k][j - i] = str[j];
		words[k++][j - i] = '\0';
	}

	return (words);
}
