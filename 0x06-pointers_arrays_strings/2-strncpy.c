#include <stdio.h>

/**
 * _strncpy - copies at most n characters from src to dest
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of characters to copy
 * 
 * Return: a pointer to the destination string dest
 */
char *_strncpy(char *dest, const char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}

