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

	if (n > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n");
	}
	if (n == 0)
	{
		printf("last digit of %d is %d and is 0");
	}
	if (n <= 6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0");
	}
	return (0);
}
