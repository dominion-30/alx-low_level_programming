#include "main.h"
#include <string.h>

/**
* _strcat - function that concatenate two strings
* @str: char
* Return: dest.
*/


char *_strcat(char *dest, char *src)
{	
	strcat(dest, src);
	strcat(dest, "\0");
	return dest;

}
