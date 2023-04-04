#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: first parameter
 * @c: second parameter
 * Return: character or NULL
 */
char *_strchr(char *s, char c)
{
	int ar;

	for (ar = 0; *(s + ar); ar++)
	{
		if (*(s + ar) == c)
			return (s + ar);
	}
	if (*(s + ar) == c)
		return (s + ar);
	return (0);
}

