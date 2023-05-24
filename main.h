#ifndef MAIN_H
#define MAIN_H

extern char **environ;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>



void init(char **argv, char **env);
char *_getenv(const char *name);
char *_strdup(const char *str);
int _strcmp(char *str1, char *str2);
char *my_strcpy(char *destination, const char *source);
char *my_strcat(char *des, const char *sour);
unsigned int my_strlen(const char *s);
char *_path(char *path);
int _fork(char **argv, char **env, char *file);
int exec(char **argv, char **env, char *file);
int _tok_count(char **argv);
char **_tok(char *line_char, ssize_t size, char **argv);
void free_tokens(char **token, int count);
void handle_error(char **argv, char *file);
int _putenv(char *str);
int _unsetenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);

#endif

