#include <stdio.h>
#include "parse.h"

int main(int argc, char *argv[])
{
    FILE *ptr = NULL;
    char line[512];
    ptr = fopen("../test.csv", "r");
    if (!ptr)
    {
        printf("Open test.csv file Error.\n");
    }
    else
    {
        while(fgets(line, 512, ptr))
        {
            ParseString(line);
        }
        fclose(ptr);
    }
    return 0;
}
