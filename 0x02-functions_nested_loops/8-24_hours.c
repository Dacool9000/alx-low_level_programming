#include "main.h"
/**
 * jack_bauer - tp print time
 * Return: 0
 */
void jack_bauer(void)
{
int a, b, c, d;
a = b = c = d = 0;

	while (a <= 2)
	{
		while (b <= 9)
		{
		if ((a <= 1 && b <= 9) || (a == 2 && b <= 3))
		{
		while (c < 6)
		{
			while (d <= 9)
			{
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
			d++;
			}
			c++;
			d = 0;
		}
		}
		b++;
		c = 0;
		}
		a++;
		b = 0;
		}
}
