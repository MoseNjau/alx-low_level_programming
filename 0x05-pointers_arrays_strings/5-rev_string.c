#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: first parameter
 * Return: void
 */
void rev_string(char *s)
{
	int mi, k;
	char buffer[500];

	mi = 0;
	while (s[mi] != '\0')
	{
		*(buffer + mi) = s[mi];
		mi++;
	}

	mi = mi - 1;
	k = 0;
	while (mi >= 0)
	{
		s[mi] = *(buffer + k);
		mi--;
		k++;
	}
}
