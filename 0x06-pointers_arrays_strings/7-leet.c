#include "main.h"
#include <string.h>
/**
* *leet - function that encode a string
* @result - string of type char
* Return: object of type char
*/

char *leet(char *result)
{	int i;
	char len;
	len = strlen(result);

	for (i = 0; i<=len; i++)

	{	


		if (result[i] == 'a' || result[i] == 'A')
	 	{
			result[i] = '4';
		
		}
		else if (result[i] == 'e' || result[i] == 'E')
		{

			result[i] = '3';
		}

		else if (result[i] == 'o' || result[i] == 'O')
		{
			result[i] = '0';

		}

		else if (result[i] == 't' || result[i] == 'T')
		{

			result[i] = '7';
		}

		else if (result[i] == 'l' || result[i] == 'L')

		{
			result[i] = '1';

		
		}

		else
		{
			continue;

		}
	}
	return result;


}
