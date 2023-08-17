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
	fib = i = 1;
	printf("1");
	for (c = 1; c <= 97; c++)
	{
		fib = i + a;
		i = a;
		a = fib;
		printf(", ");
		printf("%lu", fib);
	}
	printf("\n");
	return (0);
}
