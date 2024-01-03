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
	char password[7];
	int i;

	srand(time(NULL));

	for (i = 0; i < 6; i++)
	{
		switch(rand() % 3)
		{
			case 0:
				password[i] = rand() % 26 + 'A';
				break;
			case 1:
				password[i] = rand() % 26 + 'a';
				break;
			default:
				password[i] = rand() % 10 + '0';
				break;
		}
	}

	password[6] = '\0';
	printf("%s", password);

	return (0);
}
