#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
				break;
		}
		if (!(*(accept + b)))
			break;
	}
	return (a);
}
