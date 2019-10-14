#include <stdio.h>


static int addDigits(int num)
{
    return (num - 1)%9 + 1;
}

int main()
{
    int x;
    printf("Please Enter A Number: ");
    scanf("%d", &x);
    printf("Digits: %d\n", addDigits(x));
    return 0;
}
