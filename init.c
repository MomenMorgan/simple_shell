#include "main.h"
/**
 * init - initializes the shell along and its dependencies
 * @argv: command line arguments.
 * @env: environment variable.
 */
void init(char **argv, char **env)
{
	char *prompt = "$ ";
	char *get_line = NULL;
	ssize_t line_chars;
	size_t size = 0;
	int j;
	char **tokens;
	char *ar = argv[0];
	while (1001)

	{
		if (isatty(STDIN_FILENO))
			write(STDERR_FILENO, prompt, 2);
		line_chars = getline(&get_line, &size, stdin);
		if (line_chars == -1)
		{
			free(get_line);
			exit(0);
		}
		tokens =  _tok(get_line, line_chars, argv);
		j = _tok_count(tokens);
		if (tokens[0] == NULL)
		{
			free_tokens(tokens, j);
			continue;
		}
		if (_strcmp(tokens[0], "exit") == 0)
		{
			free(get_line);
			free_tokens(tokens, j);
			exit(0);
		}
		if (_fork(tokens, env, ar) == -1)
		{
			free(get_line);
			free_tokens(tokens, j);
			exit(127);
		}
		free_tokens(tokens, j);
	}
	free(get_line);
	exit(0);
}
