#include "main.h"

/**
 *main - entry point.
 *@argv: array of strings.
 *@argc: argc number of arguments.
 *@env: environment varible.
 *Return: 0 success.
 */

int main(int argc, char **argv, char **env)
{

	if (argc == 1)
		init(argv, env);
	return (0);
}



