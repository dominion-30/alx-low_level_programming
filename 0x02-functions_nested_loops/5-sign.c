#include "main.h"

/**
* int print_sign(int n) function that prints the sign of a number
*
* Return 1 and print + if n is greater than zero
* Return 0 and print 0 if n is zero
* Return -1 and print - if n is less than zero
*/
int print_sign(int n)
{	int result;
	result = 1;
	if (n > 1)
	{	_putchar('+');
		return(result);
        	
	}

	result = 0;
	if (n == 0)
	{
        	_putchar('0');
		return(result);
	}

	result = -1;
	if (n < - 1)
	{
        	_putchar('-');
		_putchar('1');
		return(result);
	}
	return(result);
}
