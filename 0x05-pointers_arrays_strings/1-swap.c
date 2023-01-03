#include "main.h"
/**
 * swap_in - swaps the values of two intergers
 * @: interger to swap
 * @b: interger to swap
 */
void swap_int(int *a, int *b)
{
	int m;
	m = *a;
	a*= *b;
	*b = m;
}
