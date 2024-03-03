#include "main.h"
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
	int ind = 0;
	int d = 'a' - 'A';

	for (ind = 0; hi[ind] != '\0'; ++ind)
	{
		if (hi[ind] >= 'a' && hi[ind] <= 'z')
		{
			hi[ind] = hi[ind] - d;
		}
	}
	return (hi);
}
