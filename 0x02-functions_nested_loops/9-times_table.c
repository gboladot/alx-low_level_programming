#include "main.h"
/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @p: The value of the times table to be printed.
 */
void print_times_table(int p)
{
int num, mult, prod;

	if (p >= 0 && p <= 15)
	{
	for (num = 0; num <= p; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= p; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;
			if (prod <= 99)
			_putchar(' ');
			if (prod <= 9)
			_putchar(' ');
			if (prod >= 100)
			{
				_putchar((prod / 100) + '0');
				_putchar((prod / 10) % 10 + '0');
			}
			else if (prod <= 99 && prod >= 10)
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
	}

}
