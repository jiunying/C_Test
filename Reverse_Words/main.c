#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i;
    int word_cnt = 0, len;
    char str[] = "i am a boy";
    char **tmp, *tok_s;
    char *re_str;
    tok_s = strtok(str, " ");
    if(tok_s != NULL)
    {
        tmp = (char **) malloc((word_cnt+1)*sizeof(char*));
        len = strlen(tok_s);
        tmp[word_cnt] = (char *)malloc((len+1)*sizeof(char));
        strcpy(tmp[word_cnt], tok_s);
        word_cnt++;
        while(1)
        {
            tok_s = strtok(NULL, " ");
            if(!tok_s)
            {
                break;
            }
            tmp = realloc(tmp, (word_cnt+1)*sizeof(char *));
            len = strlen(tok_s);
            tmp[word_cnt] = (char *)malloc((len+1)*sizeof(char));
            strcpy(tmp[word_cnt], tok_s);
            word_cnt++;
        }
    }
    for (i = 0; i < word_cnt; ++i)
    {
        if (0 == i)
        {
            re_str = strcat(tmp[word_cnt-1-i], " ");
        }
        else
        {
            re_str = strcat(re_str, tmp[word_cnt-1-i]);
            re_str = strcat(re_str, " ");
        }
    }
    printf("%s\n", re_str);
    return 0;
}
