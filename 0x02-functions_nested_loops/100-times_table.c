#include "main.h"
/**
 * print_times_table - timetable
 * @n: the aregument received
 * Return: 0
 */
void print_times_table(int n)
{
int x, y, z, u, d, q;

if (n >= 0 && n <= 15)
{
for (x = 0; x <= n; x++)
{
	_putchar('0');
	for (y = 1; y <= n; y++)
	{
		z = x * y;
		if (z < 9)
		{
		_putchar(44);
		_putchar(32);
		_putchar(z + 48);
		}
		if (z > 9 && z <= 99)
		{
			u = z % 10;
			d = (z - u) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(d + '0');
			_putchar(u + '0');
		}
		else if (z > 99)
		{
			u = z % 10;
			d = (z / 10) % 10;
			q = z / 100;
			_putchar(44);
			_putchar(32);
			_putchar(q + '0');
			_putchar(d + '0');
			_putchar(u + '0');
		}
		
	}
	_putchar('\n');
}
}
}
