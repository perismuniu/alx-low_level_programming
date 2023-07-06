#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 *@n: value of a bit.
 *@index: position of the value of a bit that needs to be set to 1.
 *Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n ^= (1UL << index);
		return (1);
}
