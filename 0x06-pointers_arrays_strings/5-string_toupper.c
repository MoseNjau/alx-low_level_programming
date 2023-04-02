#include "main.h"
/**
 *string_toupper - Changes lowercase to uppercase
 *@s: Parameter
 *Return: string
 */
char *string_toupper(char *s)
{
	int d;

	d = 0;
	while (*(s + d))
	{
		if (*(s + d) >= 'a' && (*(s + d) <= 'z'))
		*(s + d) -= 'a' - 'A';
		d++;
	}
	return (s);
}
