#include "main.h"
/**
 * print_last_digit - prints the last digit og a;number
 * @c: the number to;be checked
 * Return: 0 value
 */
int print_last_digit(int c)
{
int last;

last = c % 10;
if (last < 0)
{
	last = last * -1;
}
_putchar (last + '0');
return (last);
}
