#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: always o
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z' ; alph++)
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(low);
		}
	}

	putchar('\n');
	return (0);
}
