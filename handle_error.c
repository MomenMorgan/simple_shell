#include "main.h"

/**
 *handle_error - handle the non interactive error.
 *@argv: array of strings.
 *@file:file name.
 */

void handle_error(char **argv, char *file)
{
	write(STDERR_FILENO, file, my_strlen(file));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, "1", 1);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, argv[0], my_strlen(argv[0]));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, "not found\n", 10);
}
