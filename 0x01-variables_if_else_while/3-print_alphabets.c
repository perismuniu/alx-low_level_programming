#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then uppercase.
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar(\n);

	return (0);
}
