#include <stdio.h>
#include <string.h>
#include "parse.h"

void ParseString(char *str)
{
    char *tok_str, *delim = " ,\n\t";
    tok_str = strtok(str, delim);
    if (tok_str == NULL)
        return;
    if (!strcmp(tok_str, "FrameCount"))
    {
        tok_str = strtok(NULL, delim);
        printf("%s\n", tok_str);
        while (1)
        {
            tok_str = strtok(NULL, delim);
            if (tok_str == NULL)
            {
                break;
            }
        }
    }
    else if (!strcmp(tok_str, "Width"))
    {
        tok_str = strtok(NULL, delim);
        printf("%s\n", tok_str);
        while (1)
        {
            tok_str = strtok(NULL, delim);
            if (tok_str == NULL)
            {
                break;
            }
        }
    }
    else if (!strcmp(tok_str, "Height"))
    {
        tok_str = strtok(NULL, delim);
        printf("%s\n", tok_str);
        while (1)
        {
            tok_str = strtok(NULL, delim);
            if (tok_str == NULL)
            {
                break;
            }
        }
    }
    else
    {
    }
}
