#include "main.h"
/**
 * print_sign - prints possitves or negatives integers
 * @n: the number to be tested
 * Return: 1 if positve - when negative
 */
int print_sign(int n)

{
if (n > 0)
{
	_putchar(43);
	return (1);
}
else if (n < 0)
{
	_putchar(45);
	return (-1);
}
else
{
	_putchar(48);
	return (0);
}
}

