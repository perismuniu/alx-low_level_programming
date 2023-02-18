#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase case
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
