#include <stdio.h>
#include <string.h>

static void parseItem(const char *str)
{
    char parse_str[256];
    static int cnt = 0;
    if (!strncmp(str, "// ", 3))
    {
        strcpy(parse_str, &str[3]);
        printf("[%d]%s", cnt, parse_str);
        cnt++;
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
            parseItem(line);
        }
        fclose(fptr);
    }
    return 0;
}
