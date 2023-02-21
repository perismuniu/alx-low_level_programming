#include "main.h"

/**
 * main - function that prints the alphabet in lower case.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');

}
