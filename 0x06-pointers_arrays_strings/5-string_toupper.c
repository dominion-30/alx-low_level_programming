#include "main.h"
#include <ctype.h>

/**
* *string_toupper
* @result: lowercase string of type char
* Return: object of type char
*/

char *string_toupper(char *result)
{	*result = toupper(*result);
	

	return result;

}
