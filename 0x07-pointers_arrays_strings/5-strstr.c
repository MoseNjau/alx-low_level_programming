#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first parameter
 * @needle: second parameter
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int d, f;

	f = 0;
	d = 0;
	while (*(haystack + d))
	{
		while (*(needle + f) && *(haystack + d) == *needle)
		{
			if (*(haystack + (d & f)) == *(needle + f))
				j++;
			else
				break;
		}

		if (*(needle + f))
		{
			d++;
			f = 0;
		}
		else
		{
			return (haystack + d);
		}
	}
	return (0);
}
