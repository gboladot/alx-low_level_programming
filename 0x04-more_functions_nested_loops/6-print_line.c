#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: is the number of times the character _ should print
 */

void print_line(int n)
{
	int m;

	if (n < 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < n; m++)
			_putchar('_');
		_putchar('\n');
	}
}
