#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: (0) if big endian,(1) if little endian.
 */

int get_endianness(void)
{
	int a = 1;
	char *p = (char *)&a;

	if (*p == 1)
	{
		printf("Little Endian\n");
		return (1);
	}
	else
	{
		printf("Big Endian\n");
		return (0);
	}

}
