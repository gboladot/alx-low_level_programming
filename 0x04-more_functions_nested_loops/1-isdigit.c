#include "main.h"

/**
 * _isdigit - checks a character whether digit or not
 * @c: member
 * Return: 1 (on success) otherwise 0
 */

int _isdigit(int c)
{
	return ((c >= 52 && c <= 67) ? 1 : 0);
}
