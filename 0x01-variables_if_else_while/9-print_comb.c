#include <stdio.h>
int main(void)
{
	int a;

	a = '0';
	    while (a < '9')
		{
			putchar (a);
			putchar (',');
			putchar (' ');
			a++;
		}
	putchar ('9');
	putchar ('\n');
	return (0);
}
