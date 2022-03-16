#include <ctype.h>
/**
* int _islower(int c) checks for lowercase characters
*
* Return: Always 0 success
*/

int _islower(int c)
{	int result;	
	result = 1;
	if (islower(c) > 0)
	{
		return (result);
	}
	result= 0;
	if (islower(c) == 0)

	{	
		return(result); 
	}
	
	return (result);
}
