#include "main.h"
#include <string.h>

/**
* _strncat - function that concatenate two strings
* @str: char
* Return dest
*/



char *_strncat(char *dest, char *src, int n)
{
	strncat(dest,src, n);
	return dest;
		
}
