#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int k, m;

	for (k = 0; k < 10; k++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m >= 10)
				_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
		}
		_putchar('\n');
	}
}
