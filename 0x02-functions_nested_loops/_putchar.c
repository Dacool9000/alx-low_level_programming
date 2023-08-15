#include <main.h>
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 *
 * Return: om success 1.
 * on error, -1 is returned, and errno isvset appropriately
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
