/*
*Contributor: Abiola Ayobamidele
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main: print last digit
*
*Return: Always Success 
*/
int main(void)
{

/**
 * Main:print random numbers with 'if' description
 *
 * Return 0
*/
	int n;
	int last_digit;
	(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
		if (last_digit > 5)
			printf("The Last digit of %d is %d and is greater than 5\n", n, last_digit);
	if (n == 0)
		if (last_digit == 0)
			printf("The Last digit of %d is %d and is 0\n", n, last_digit);
	if (n < 6 && n != 0)
		if (last_digit < 6 && last_digit != 0)
			printf("The Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);  
	return (0);

}
