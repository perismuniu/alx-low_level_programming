#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: value of a bit.
 * @index: position of the value.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	a = ((n >> index) & 1);

	return (0);
}
