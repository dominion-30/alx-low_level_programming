#include "main.h"
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s,accept);

	if (result)
	{
		return result;
	}

	else

	{
		result = NULL;
		return result;

	}


}
