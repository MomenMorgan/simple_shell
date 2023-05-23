
#include  "main.h"

/**
 *_path - path to the cmd directory.
 * @path_ptr: pointer to the cmd.
 * Return: pointer to the cmd or NULL.
 */

char * _path(char * path_ptr)
    {
        char * loc, *loc_cpy, *file;
        int cmd_len;
        int dir_len;
        char *p_token;
        struct stat st;

        if(path_ptr == NULL)
        return NULL;

        loc = _getenv("PATH");

        if(loc)
        {

        loc_cpy = _strdup(loc);

        cmd_len = my_strlen(path_ptr);

        p_token = strtok(loc_cpy, ":");

        while(p_token != NULL)
        {
            dir_len = my_strlen(p_token);

            file = malloc(cmd_len + dir_len + 2);

            my_strcpy(file, p_token);
            my_strcat(file, "/");
            my_strcat(file, path_ptr);
            my_strcat(file, "\0");

            if(stat(file, &st) == 0)
            {
                free(loc_cpy);
                return file;
            }
            else{
                free(file);
                p_token = strtok(NULL, ":");
            }
        }
        free(loc_cpy);
        if(stat(path_ptr, &st) == 0)
        {
            return path_ptr;
        }
        return NULL;

        }
        
    return NULL;

    }