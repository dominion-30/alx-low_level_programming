#include "main.h"
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	strcat(dest,src, n);
	return dest;

}
