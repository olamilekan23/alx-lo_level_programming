#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char password[12];
	int i, sum;

	srand(time(NULL));

	for (i = 0; i < 11; i++)
	{
		password[i] = rand() % 26 + 'A';
	}
	sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum += password[i];
	}

	password[10] = (sum % 10) + '0';
	password[11] = '\0';
	printf("%s", password);

	return (0);
}
