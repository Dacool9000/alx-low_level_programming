#include "main.h"
/**
 * print_alphabet - print alphabets in small caps
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

