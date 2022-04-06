#include <stdio.h>
#include "main.h"

/**
 * main - print
 * @argv: arguments
 * @argc: count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
