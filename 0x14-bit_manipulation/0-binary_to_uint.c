#include "main.h"

/**
 * binary_to_uint - function that coverts a binary number to an unsigned int.
 * @b: pointing to a string of 0 & 1 chars.
 * Return: converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int  uint = 0;

	if (b == NULL)
		return (0);

	for (int j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		uint = uint << 1;

		if (b[j] == '1')
			uint = uint | 1;
	}
	return (uint);
}
