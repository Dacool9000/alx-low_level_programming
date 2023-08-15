#include "main.h"
/**
 * _islower - a program that checks for lower character
 * @c: the character to be checked
 * Return: 1 is lower
 * otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
