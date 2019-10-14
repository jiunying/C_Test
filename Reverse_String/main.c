#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverseString(char *s)
{
    int len = strlen(s), i;
    char *re_s = (char *)malloc(len+1);
    memset(re_s, 0x00, len+1);
    for (i = 0; i < len; ++i)
    {
        re_s[i] = s[len-i-1];
    }
    return re_s;
}

int main(void)
{
    char str[64], *re_str;
    printf("Please Enter A String: ");
    scanf("%s", str);
    re_str = reverseString(str);
    printf("Return string is: %s\n", re_str);
    free(re_str);
    return 0;
}
