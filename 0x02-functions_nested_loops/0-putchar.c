#ifndef MAIN
#define MAIN
#include "main.h"
#include "stdio.h"
#endif

/** 
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
main ()
{
	char *sh = '_putchar';
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}


