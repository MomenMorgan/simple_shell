#include "main.h"


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
        if (_path(cmd) != NULL)
        {
        if(execve(full_path, argv, env) == -1)
            {
                free(full_path);
                perror("haha");
            }
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