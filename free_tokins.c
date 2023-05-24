#include "main.h"

/**
 * free_tokens - toknize the given string
 * @token: argv to be freed
 * @count: number of tokens
 */

void free_tokens(char **token, int count)
{
	int i;
	for (i = 0; i <= count; i++)
	{
		free(token[i]);
	}
	free(token);
}
