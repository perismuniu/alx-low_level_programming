#include <stdio.h>
/**
 * main - Program that prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');

	return (0);
}
