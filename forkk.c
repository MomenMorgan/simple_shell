#include "main.h"

int _fork(char **argv,char  **env, int argc, char *file)
{
    pid_t pid;
    int status;
    char **tokins;
    int ex ;

    
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
    return (0);

}