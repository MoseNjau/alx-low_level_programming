#include "main.h"

/**
 * _strpbrk - searches for a string for any of a set of bytes
 * @s: first parameter
 * @accept: second parameter
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
				break;
		}
		if (*(accept + b))
			return (s + a);
	}
	return (0);
}
