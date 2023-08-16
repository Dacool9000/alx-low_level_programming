#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints n to 98
 * @n: the begining of rhe count
 * Return: 0
 */
void print_to_98(int n)
{	
	if (n < 0 || n <= 97)
	{
	for (; n < 98; ++n)
	{
	printf("%d, ", n);
	}
	printf("98");
	printf("\n");
	}
	else
	{
	for (; n > 98; -- n)
	{
	printf("%d, ", n);
	}
	printf("98\n");
	}

}
