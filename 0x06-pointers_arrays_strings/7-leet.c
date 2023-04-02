#include "main.h"
/**
*leet - encodes a string into 1337
*@s: string to encode
*Return: address of s
*/
char *leet(char *s)
{
	int a, b;
	char mi[] = "aAeEoOtTlL";
	char rm[] = "4433007711";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (mi[b] == *(s + a))
				*(s + a) = rm[b];
		}
	}
	return (s);
}

