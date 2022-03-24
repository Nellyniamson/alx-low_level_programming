#include "main.h"
/**
 * _strcat - fonction that concatenates two strings
 * @dest: pointer to destinatio
 * @src: pointer to source
 *
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
