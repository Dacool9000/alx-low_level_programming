#include <stdio.h>
/**
 * main - retry
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	c = 0;

	while (c < 10)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
			putchar('\n');
	return (0);
}
