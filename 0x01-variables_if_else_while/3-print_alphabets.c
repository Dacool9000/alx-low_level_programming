#include <stdio.h>
/**
 * main - retry
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	
	char d;

	c = 'a';
	d = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
			putchar('\n');
	return (0);
}
