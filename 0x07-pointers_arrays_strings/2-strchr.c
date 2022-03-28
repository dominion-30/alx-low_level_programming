#include "main.h"
#include <string.h>

/**
* _strchr - function that locates a character in a string
* @s: pointer of type char
* @c: variable of type char
*/

char *_strchr(char *s, char c)
{	
	char *result;
	result = strchr(s,c);
	if (result)
	{	
		return result;
	}
	else
	{	result = NULL;
		return result;
	}

	return result;
}
