#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int d = 0, f;
	char mi[] = " \t\n,;.!?\"(){}";

	while (*(s + d))
	{
		if (*(s + d) >= 'a' && *(s + d) <= 'z')
		{
			if (d == 0)
				*(s + d) -= 'a' - 'A';
			else
			{
				for (f = 0; f <= 12; f++)
				{
					if (mi[f] == *(s + d - 1))
						*(s + d) -= 'a' - 'A';
				}
			}
		}
		d++;
	}
	return (s);
}
