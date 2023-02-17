#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase case
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
