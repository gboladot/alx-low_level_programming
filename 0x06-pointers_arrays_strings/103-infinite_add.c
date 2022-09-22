#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: first number.
 * @n2: second number.
 * @r: buffer for the function to store the result.
 * @size_r: buffer size
 *
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int k1 = 0, k2 = 0, z, m, dr1, dr2, add = 0;

	while (*(n1 + k1) != '\0')
		k1++;
	while (*(n2 + k2) != '\0')
		k2++;
	if (k1 >= k2)
		m = k1;
	else
		m = k2;
	if (size_r <= m + 1)
		return (0);
	r[m + 1] = '\0';
	k1--, k2--, size_r--;
	dr1 = *(n1 + k1) - 48, dr2 = *(n2 + k2) - 48;
	while (m >= 0)
	{
		z = dr1 + dr2 + add;
		if (z >= 10)
			add = z / 10;
		else
			add = 0;
		if (z > 0)
			*(r + m) = (z % 10) + 48;
		else
			*(r + m) = '0';
		if (k1 > 0)
			k1--, dr1 = *(n1 + k1) - 48;
		else
			dr1 = 0;
		if (k2 > 0)
			k2--, dr2 = *(n2 + k2) - 48;
		else
			dr2 = 0;
		m--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
