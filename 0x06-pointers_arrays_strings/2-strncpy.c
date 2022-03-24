#include "main.h"

/**
 * _strncpy - function that copy a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes
 *
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
