#include <stdio.h>
/**
 * main - retry
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
			putchar('\n');
	return (0);
}
