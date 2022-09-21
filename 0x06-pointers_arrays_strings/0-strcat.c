#include "main.h"
#include <stdio.h>

/**
 * _strcat - Funtion that concatenates two strings
 * @dest: A pointer to a char that will be added to
 * @src: A pointer to a char that will be added
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
