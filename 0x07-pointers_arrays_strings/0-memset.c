#include "main.h"
#include <string.h>
/**
* *_memset - fills memory with a constant byte
@s : pointer of type char
@b : variable of type char
@n : variable of type int
* Returns: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	memset(s,b,n);
	return s;

}
