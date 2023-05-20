#include "main.h"

int _fork(char **argv,char  **env, int argc)
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
        if(exec(tokins,env) == -1)
        {
            return (-1);
        }
        
    }
    else
    {
        wait(&status);
        
    }
    return (0);

}