#include <stdio.h>

/**
* main: main executed function
*
* return: is always 0
*/

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i++)
	       putchar(i);
	getchar('\n');
	return (0);
}	
