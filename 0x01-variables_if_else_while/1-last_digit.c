#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Prints a text according number
 * Return: Always 0.
 *
 */

int main(void)

{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Lastd digit of %d ls %d and is greater than 5\n", lastd);
	}
	if else (lastd == 0);
	{
		printf("Last digit of %d and is 0\n", lastd);
	}
	if else  (lastd < 6 && lastd != 0
	{
		printf("Last digit of %d is %d and is less than 6 and not  0\n", lastd);
				n, n % 10);
	}
	return (0);
}
:%s/\s\+$//e

