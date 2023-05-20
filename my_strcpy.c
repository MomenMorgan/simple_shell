#include "main.h"

/**
 * my_strcpy - copies the string from sur to dis.
 *@destination: varible to take the copy
 *@source: varible to be copied
 *Return:pointer to dis or NULL on error.
 */

char *my_strcpy(char *destination, const char *source)
{
	int i;

	if (destination == NULL)
		return (NULL);

	i = 0;

	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';

	return (destination);
}
