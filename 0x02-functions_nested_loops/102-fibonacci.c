#include "main.h"
#include <stdio.h>
/**
 * main - fibonici
 * Return: 0
 */
int main(void)
{
	int a, i, fib, c;

	a = 1;
	fib = i = 0;

	for (c = 1; c <= 50; c++)
	{
		fib = i + a;
		i = a;
		a = fib;
		printf("%d, ", fib);
	}
	return (0);
}
