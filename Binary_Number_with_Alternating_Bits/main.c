#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


static bool hasAlternatingBits(int n)
{
    int b = n&0x1;
    while (n)
    {
        if (b^(n&1))
        {
            return false;
        }
        b ^= 1;
        n >>= 1;
    }
    return true;
}

int main()
{
    int x;
    bool r;
    puts("Please Enter a number:");
    scanf("%d", &x);
    r = hasAlternatingBits(x);
    if (r)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}
