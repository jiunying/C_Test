//input 1 and 2
//output 2
//
//1 is 0001b
//2 is 0010b
//| 0001 |
//| 0010 |
//two differrnt bits.

#include <stdio.h>

int hammingDistance(int x, int y)
{
    int z = x^y;
    int count = 0;
    while(z)
    {
        count++;
        z &= (z-1);
    }
    return count;
}

int main(void)
{
    int n;
    n = hammingDistance(1, 2);
    printf("%d\n", n);
    return 0;
}
