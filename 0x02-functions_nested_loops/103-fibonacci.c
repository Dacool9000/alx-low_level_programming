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
	unsigned long fib2 = 2;

	a = 2;
	fib = i = 1;
	for (c = 1; c <= 49; c++)
	{
		fib = i + a;
		i = a;
		a = fib;
		if ((fib % 2 == 0) && fib <= 4000000)
		{
			fib2 = fib + fib2;
		}
	}
	printf("%lu", fib2);
	printf("\n");
	return (0);
}
