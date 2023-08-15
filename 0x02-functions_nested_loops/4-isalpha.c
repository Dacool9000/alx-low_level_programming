#include "main.h"
/**
 * _isalpha - a program that checks for character
 * @c: the character to be checked
 * Return: 1 is lower
 * otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
