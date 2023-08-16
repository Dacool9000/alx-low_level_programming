#include "main.h"
#include <stdio.h>
/**
 * main - fibonici
 * Return: 0
 */
int main(void)
{
	unsigned long a, i, fib;
	int c;

	a = 1;
	fib = i = 0;

	for (c = 1; c <= 50; c++)
	{
		fib = i + a;
		i = a;
		a = fib;
		printf("%lu, ", fib);
	}
	printf("\n");
	return (0);
}
