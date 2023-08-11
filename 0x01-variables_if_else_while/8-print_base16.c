#include <stdio.h>
/**
 * main - retry
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	char d;

	d = 'a';

	c = 0;

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	while (c >= 10 && c < 16)
	{
		putchar(d);
		d++;
		c++;
	}
			putchar('\n');
	return (0);
}
