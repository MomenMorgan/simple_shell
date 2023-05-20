#include "main.h"

/**
 * my_strlen - find the length of a string
 *@s: string to be strlen
 *Return:unsigned int.
 */

unsigned int my_strlen(const char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
