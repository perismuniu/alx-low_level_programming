#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of n: ");
	scanf("%d", &n);

	if (n > 5)
	{
		printf("and is greater than 5");
	}
	if (n == 0)
	{
		printf("and is 0");
	}
	if (n <= 6)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
