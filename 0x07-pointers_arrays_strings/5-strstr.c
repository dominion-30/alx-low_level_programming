#include "main.h"
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
	char *result;
	result = strstr(haystack,needle);

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
