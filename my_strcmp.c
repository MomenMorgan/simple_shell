#include "main.h"

/**
 * _strcmp - compare two strings
 * @str1: to be compared
 * @str2: to be compared
 * Return: 1 or -1.
*/

int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}
