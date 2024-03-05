#include "main.h"

/**
 * _strpbrk -  The _strpbrk() function locates the first occurrence in the string s
 *  of any of the bytes in the string accept
 * @s: stirng
 * @accept: character
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
