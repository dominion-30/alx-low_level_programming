#include "main.h"
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
	int len;
	len = strspn(s,accept);
	return len;

}
