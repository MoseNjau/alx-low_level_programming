#include "main.h"
#include <stdlib.h>
/**
 * wrdcnt - counts number of words in a string
 * @s: string to count
 * Return: int of number of words counted
 */
int wrdcnt(char *s)
{
	int a, n = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
		{
			if (s[a + 1] != ' ' && s[a + 1] != '\0')
				n++;
		}
		else if (a == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 * strtow - function will splits a string into words
 * @str: string to be splitted
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int d, a, k, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	d = 0;
	while (str[d])
	{
		if (str[d] != ' ' && (d == 0 || str[d - 1] == ' '))
		{
			for (a = 1; str[d + a] != ' ' && str[d + a]; a++)
				;
			a++;
			w[wc] = (char *)malloc(a * sizeof(char));
			a--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < a; l++)
				w[wc][l] = str[d + l];
			w[wc][l] = '\0';
			wc++;
			d += a;
		}
		else
			d++;
	}
	return (w);
}
