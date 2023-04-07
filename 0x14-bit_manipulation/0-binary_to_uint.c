#include "main.h"

/**
 * binary_to_uint - function that coverts a binary number to an unsigned int.
 * @b: pointing to a string of 0 & 1 chars.
 * Return: converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int  uint = 0;
	int j;
	size_t len = strlen(b);

	if (b == NULL)
		return (0);

	for (j = 0; j < len; j++)
	{
		if (b[j] == '1')
		{
			uint += (unsigned int)pow(2, len - 1, -j);
		}
		else if (b[j] != '0')
		{
			return (0);
		}
	}
	return (uint);
}
