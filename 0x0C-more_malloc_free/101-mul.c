#include "main.h"

/**
 * is_digit - Check if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _strlen - Calculate the length of a string
 * @str: The string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int len1, len2, *result;
	char *num1, *num2;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];
	len1 = _strlen(num1);
	len2 = _strlen(num2);

	result = malloc(sizeof(int) * (len1 + len2));
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	multiply(num1, len1, num2, len2, result);

	free(result);

	return (0);
}

/**
 * multiply - Multiply two large numbers
 * @num1: First number as string
 * @len1: Length of the first number
 * @num2: Second number as string
 * @len2: Length of the second number
 * @result: Array to store the result
 */
void multiply(char *num1, int len1, char *num2, int len2, int *result)
{
	int i, j, carry, prod;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = prod % 10;
			carry = prod / 10;
		}
		result[i + j + 1] = carry;
	}

	print_result(result, len1 + len2);
}

/**
 * print_result - Print the result of multiplication
 * @result: Array containing the result
 * @size: Size of the result array
 */
void print_result(int *result, int size)
{
	int i = 0;

	while (i < size && result[i] == 0)
		i++;

	if (i == size)
	{
		printf("0\n");
		return;
	}

	while (i < size)
	{
		printf("%d", result[i]);
		i++;
	}

	printf("\n");
}
