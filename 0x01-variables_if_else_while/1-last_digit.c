#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -  program that assigns random number each time its executed
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */

	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	else if  (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);

	return (0);
}
