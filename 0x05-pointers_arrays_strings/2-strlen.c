#include "main.h"

/**
 * _strlen - Returns the lenght of string
 * @str: The string whose lenght is to be determined
 *
 * Return: The lenght of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
