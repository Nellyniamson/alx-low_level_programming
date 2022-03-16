#include "main.h"

/**
 * _isalpha - return 0 or 1
 * @c: single letter
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
		return (0);
}
