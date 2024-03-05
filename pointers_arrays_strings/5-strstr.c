#include "main.h"
char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
		return (haystack);
	
	while (*haystack)
	{
		i = 0;
		
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
			}	i++;
		} 	while (haystick[i] == needle[i]);
	}	haystack++;
return ('\0');
}
