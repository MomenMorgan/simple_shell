#include "main.h"


/**
 * my_fork - forking the process.
 * @argv:array of strings to be passed.
 *@file: file name.
 *@env: environment variable
 * Return: 0 or -1 on error.
 */

int _fork(char **argv,char  **env, char *file)
{
    pid_t pid;
    int status;
    char **tokins;
    
   pid = fork();
    if(pid < 0) 
    {
        return (-1);

    }
    if(pid == 0)
    {
        
        tokins = argv;
        if(exec(tokins,env, file) == -1)
        {
            
            return (-1);
        }
       
    }
    else
    {
        
        wait(&status);
        
        
    }
    if(!isatty(STDIN_FILENO))
    {
        if(status != 0)
        {
            return (-1);
        }
    }
    
   
return (0);
}