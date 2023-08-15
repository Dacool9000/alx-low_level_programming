#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;
	char c;

	a = 1;
	c = 'a';

	while (a <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 'a';
		a++;
	}
}
