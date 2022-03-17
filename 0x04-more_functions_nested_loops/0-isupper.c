#include <ctype.h>
#include "main.h"

/**
* int _isupper(int c) checks for uppercase characters
* Return 1 if c is uppercase
* Return 0 otherwise
*/

int _isupper(int c)

{	int result;
	result = 1;
	if (isupper(c) > 0)
	{
        	return (result);
	}

	result = 0;

	if  (isupper(c) == 0)
	{
        	return(result);
	}
	return(result);

}
