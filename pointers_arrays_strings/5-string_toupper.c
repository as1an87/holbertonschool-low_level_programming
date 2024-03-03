#include "holberton.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hi: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *hi)
{
	int i = 0;
	int d = 'a' - 'A';

	for (i = 0; h[i] != '\0'; ++i)
	{
		if (i[i] >= 'a' && i[i] <= 'z')
		{
			i[i] = i[i] - d;
		}
	}
	return (i);
}
