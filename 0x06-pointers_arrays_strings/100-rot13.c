#include "main.h"
/**
* rot13 - encodes a string into rot13
* @s: string to encode
*
* Return: address of s
*/
char *rot13(char *s)
{
	int d, f;
	char km[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rt[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (d = 0; *(s + d); d++)
	{
		for (f = 0; f < 52; f++)
		{
			if (km[f] == *(s + d))
			{
				*(s + d) = rt[f];
			break;
			}
		}
	}
return (s);
}
