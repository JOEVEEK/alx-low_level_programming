#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns the square root of a number
 * @n: number to calculate the square root
 * @i: iterated number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt  == n)
		return (i);
	return (_sqrt(n, i + 1));
}
