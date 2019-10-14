#include <stdio.h>

int numberComplement(int num)
{
    int mask = ~0;
    while(num & mask)
    {
        mask <<= 1;
    }
    return ~mask^num;
}

int main(void)
{
    int n, x;
    printf("Please Enter A Number: "); 
    scanf("%d", &x);
    n = numberComplement(x);
    printf("The Number Complement is : %d\n", n);
    return 0;
}
