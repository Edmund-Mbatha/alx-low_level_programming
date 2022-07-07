#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if a character is lower case
 * @c: the character to be checked
 *
 * Return: 1 if lowercase 0 if not
 */
int _islower(int c)
{
	if ( islower(c) )
	{
		_putchar('1');
	}
	return (0);
}
