#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: program prints alphabets followed by new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{

	int af;

	for (af = 'a'; af <= 'z'; af++)
	{
		_putchar(af);
	}
	_putchar('\n');
}
