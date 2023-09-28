#include "main.h"

/**
 *_stringlength_recursion - Returns the length of a string
 *@s: String to be checked
 *Return: length of string
 */
int _stringlength_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _stringlength_recursion(s + 1));
}
return (0);
}

/**
 * _check_palindrome - checks if palindrome
 * @start: start point
 * @end: end point
 * @s: string
 * Return: 0 or 1
 */
int _check_palindrome(int start, int end, char *s)
{
	if (start < end)
	{
		if (s[start] != s[end])
			return (0);
		return (_check_palindrome(start + 1, end - 1, s));
	}
	return (1);
}

/**
 * is_palindrome - check if is palindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = _stringlength_recursion(s) - 1;

	return (_check_palindrome(0, i, s));
}
