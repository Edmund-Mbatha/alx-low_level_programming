#include <stdio.h>
/*
 * main entry point
 * print intergers 0-9 using putchar
 */
int main(void)
{
	int a;

	a = '0';
		for (a = '0'; a <= '9'; a++)
		putchar (a);
	putchar ('\n');
	return (0);
}
