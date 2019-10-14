#include <stdio.h>


char findDifference(const char *s, const char *t)
{
    char ret;
    int s_len = strlen(s);
    int t_len = strlen(t);
    int i;
    int s_num = 0;
    int t_num = 0;
    
    for(i = 0; i < t_len; ++i)
    {
        t_num += t[i];
    }
    for(i = 0; i < s_len; ++i)
    {
        s_num += s[i];
    }
    ret = (char) (t_num - s_num);
    return ret;
}

int main()
{

    const char *s = "ab";
    const char *t = "aba";
    char c = findDifference(s, t);
    printf("%c\n", c);
    return 0;
}
