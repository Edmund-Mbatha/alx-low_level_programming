#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lower case ten times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

