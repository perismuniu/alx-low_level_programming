#include <stdio.h>
/**
 * main - main block
 * Description: print all numbers of base 16 in lowercase.
 * You can only use putchar
 * Result: Always 0 (Succes)
 */
int main(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (letter = 'a'; letter < 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
