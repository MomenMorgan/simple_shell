#include "main.h"


void free_tokens(char **token, int count)
{
    int i;


    for(i = 0;i <= count ;i++)
                    {
                    free(token[i]);
                
                    }
                    free(token);

}