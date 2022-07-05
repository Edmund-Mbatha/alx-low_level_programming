#include <stdio.h>
int main(void)
	/* 
	 * main entry point
	 */
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar (ch);
	putchar ('\n');
	return (0);
}
