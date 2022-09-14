#include "main.h"

/**
 * _islower - short description, function to check for lowercase character
 * @c: holds values to be compared
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	if (c > 'a' && c < 'z')
	{

	return (1);
	}
	else
	{
	return (0);
	}
}
