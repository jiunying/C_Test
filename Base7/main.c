#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *base7(int num)
{
    char *str;
    const int base = 7;
    char buf[256] = {0};
    int quo, rem, flag, idx = 0;
    if(num < 0)
    {
        quo = -1 * num;
        flag = 1;
    }
    else
    {
        quo = num;
        flag = 0;
    }
    do
    {
        rem = quo%base;
        buf[idx] = rem + 48;
        idx++;
        quo /= base;
    }while(quo);
    if(flag)
    {
        buf[idx] = '-';
        idx++;
    }
    str = malloc(idx * sizeof(char));
    for(quo = 0; quo < idx; ++quo)
    {
        str[quo] = buf[idx-1-quo];
    }
    str[idx] = '\0';
    return str;
}

int main()
{
    int x;
    char *str;
    printf("Please Enter A Number : ");
    scanf("%d", &x);
    str = base7(x);
    printf("base7 is %s\n", str);
    free(str);
    return 0;
}
