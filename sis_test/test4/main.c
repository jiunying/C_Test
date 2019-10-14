#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void parseParameter(const char *str)
{
    int comp = !strncmp(str, "#define", 7);
    char delim_str[256];
    char *sub_str, *delim = " \t\n";
    strcpy(delim_str, str);
    if (comp)
    {
        sub_str = strtok(delim_str, delim);
        if (sub_str)
        {
            sub_str = strtok(NULL, delim);
        }
        if (strncmp(sub_str, "_", 1))
        {
            printf("%s\n", sub_str);
        }
    }
}

int main()
{
    FILE *fptr = NULL;
    char line[256];
    fptr = fopen("../template.h", "rb+");
    if (!fptr)
    {
        printf("Open file Error!\n");
    }
    else
    {
        while(fgets(line, 256, fptr))
        {
            parseParameter(line);
        }
        fclose(fptr);
    }
    return 0;
}
