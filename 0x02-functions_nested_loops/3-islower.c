#include "main.h"

/**
 * _islower - checks for lowercase character
 * (int c) to be checked
 * Return 1 if c is lower case other wise 0
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
