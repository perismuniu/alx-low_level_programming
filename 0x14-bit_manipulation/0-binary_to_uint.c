#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to an unsigned int.
 *@b: pointing to a string of 0 & 1 chars.
 *Return: converted number or 0.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int j;

	if (b == NULL)
	{
		return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '0')
		{
			uint = (uint << 1) | 0;
		}
		else if  (b[j] == '1')
		{
			uint = (uint << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (uint);
}
