#include "main.h"


/**
 * my_strcat - Concatenate the sour to des.
 * @des: Des to concatenate
 * @sour: String to concatenate
 * Return: pointer to des.
*/

char *my_strcat(char *des, const char *sour)
{
	int i = 0;
	int j = 0;

	while (des[i] != '\0')
	{
		i++;
	}

	while (sour[j] != '\0')
	{
		des[i] = sour[j];
		i++;
		j++;
	}
	des[i] = '\0';

	return (des);
}
