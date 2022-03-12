#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * 0-positive_or_negative-if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 *
 */ 

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if(n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);					/* your code goes there */
	return (0);
	
}

