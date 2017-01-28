#include <stdio.h>
#include <string.h>

char *reverseString(char *s)
{
    int len = strlen(s);
    int i, n = len/2;
    char tmp;
    for(i=0; i<n; ++i)
    {
        tmp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = tmp;
    }
    return s;
}

int main(void)
{
    char str[64], *re_str;
    printf("Please Enter A String: ");
    scanf("%s", str);
    re_str = reverseString(str);
    printf("Return string is: %s\n", re_str);
    return 0;
}
