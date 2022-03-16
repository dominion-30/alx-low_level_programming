#include <ctype.h>

/**
* int _isalpha(int c) checks for alphabetic character
* Return 1 if c is a letter, lowercase or uppercase
* Return 0 otherwise
*/

int _isalpha(int c)
{
	int result;
	result = 0;
	if (isalpha(c) == 0)
	{/* isalpha return 0 for non alphabets*/
		return(result);
	}

	result = 1;
	if (isalpha(c) > 0)
	{
        	return(result);
	}
	return (result);
}
