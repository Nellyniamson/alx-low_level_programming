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
	int byteCount;

	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
		dest[byteCount] = src[byteCount];
		for (; byteCount < n; byteCount++)
			dest[byteCount] = '\0';

	return (dest);
}
