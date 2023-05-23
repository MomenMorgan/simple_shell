#include "main.h"


/**
 *exec - execution function
 *@argv: array of strings.
 *@file:file name.
 *@env:environment variable.
 */

int exec(char **argv, char **env, char *file)
{
    char *cmd = NULL;
    char * full_path = NULL;

    if(argv)
    {
        cmd = argv[0];
        full_path = _path(cmd);
        
        if(cmd != NULL)
        {
        if (full_path!= NULL)
        {
        execve(full_path, argv, env);
            
        }
        else if (full_path == NULL)
        {
            execve(argv[0], argv, env);
        }
        if(isatty(STDIN_FILENO))
        {
            perror(file);
            
        }
        else
        {
            handle_error(argv, file);
            
            
        }
        
        free(full_path);
        return -1;
        }
        
    }
    return 0;
}