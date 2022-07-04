#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if( d > 5 ) {
		printf("Last digit of %d is %d and is greater than 5\n", n, d) ;
	} else if ( d == 0 ) {
		printf("Last digit of %d is %d and is zero\n", n, d) ;
	} else if ( d < 6 && d != 0 ) {
		printf("Last digit of %d is %d and is less than 6 and is not zero\n", n, d) ;
	}
	return (0);
}
