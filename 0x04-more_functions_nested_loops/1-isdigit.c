#include "main.h"
#include <ctype.h>

/**
* main -  check the code
*
* Return: Always 0
*/

int _isdigit(int c)

{	int result;
	result = 1;
	if (isdigit(c) > 0)
	{
		return(result);
	}

	result = 0;
	if (isdigit(c) == 0)
	{
		return(result);
	}
	return(result);
	
}

