#include "main.h"


int _tok_count(char **argv)
    {
        int i;

        for(i = 0; argv[i] != NULL; i++);
        
        return i;
    }

char **_tok(char * line_char, ssize_t size, char **argv)
{
    char *line_copy = NULL;
    char *delimiter = " \n";
    char *token;
    int i= 0 , j;
    if(line_char == NULL)
    return(NULL);

    line_copy = malloc(sizeof(char) * size + 1);
        if(line_copy == NULL)
            {
                perror("Memory allocation");
                return(NULL);
            }

            my_strcpy(line_copy, line_char);

            token = strtok(line_char, delimiter);
            

            while(token != NULL)
            {
                i++;
                token = strtok(NULL, delimiter);
            }
                i++;

            argv = malloc(sizeof(char *) * i + 1);
           

            token = strtok(line_copy, delimiter);
            

            for(j = 0; token != NULL; j++)
            {
                argv[j] = malloc(sizeof(char) * my_strlen(token) + 1);
                my_strcpy(argv[j], token);

                token = strtok(NULL, delimiter);
            }
            argv[j] = NULL;

            free(line_copy);
            return argv;

}