#include "main.h"

/**
 * _strdup - duplicates the string.
 *@str: varible to be duplicated
 *Return:pointer to duplicated str or NULL on error.
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *back;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	back = malloc(sizeof(char) * (length + 1));
	if (!back)
		return (NULL);
	for (length++; length--;)
		back[length] = *--str;
	return (back);
}
