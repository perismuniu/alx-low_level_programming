#include "main.h"

/**
 *flip_bits - function that returns the number of bits you would need to flip.
 *@n: first number.
 *@m: second number.
 *Return: Number of bits (k).
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		k += (xor & 1);
		xor >>= 1;
	}

	return (k);
}
