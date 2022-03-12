#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void){

	/**
	 * This function assigns a random number to the variable n each time it is executed.
*/
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				int last_digit;
				last_digit = n %10;
				if (n > 5)
					if (last_digit > 5)
						printf("The Last digit of %d is %d and is greater than 5\n", n, last_digit);
				if (n == 0)
					if (last_digit == 0)
						printf("The Last digit of %d is %d and is 0\n", n, last_digit);
				if (n < 6 && n != 0)
					if (last_digit < 6 && last_digit != 0)
						printf("The Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
			      
				/* your code goes there */					return (0);

}
