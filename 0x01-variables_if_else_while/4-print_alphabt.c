#include <stdio.h>
int main(void)
{
char letter;
letter = "a";
while (letter <= "z")
{
	if (letter == "q" || letter== "e")
	{
	
		continue;
	}
	else
	{
	
		putchar(letter);
	}
	letter++;
}
return(0);

}
