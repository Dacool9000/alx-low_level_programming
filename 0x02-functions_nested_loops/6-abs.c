#include "main.h"
/**
 * _abs - absolute value
 * @c: number to be computed
 * Return: 0 success
 */
int _abs(int c)

{
	int abs;

	if (c < 0)
	{
		abs = c * -1;
		return (abs);
	}
	return (c);
}
