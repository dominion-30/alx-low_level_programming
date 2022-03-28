#include "main.h"
#include <string.h>

/**
* *_memcpy - copies memory area
* @dest: pointer of type char
* @src: pointer of type char
* @n: variable of type int
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return dest;


}
