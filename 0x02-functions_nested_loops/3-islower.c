#include "main.h"

/**
 * _islower - short description
 * @c: contains value
 * Return: 1 if it is in lowercase or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
