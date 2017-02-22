#include <stdio.h>


int addDigits(int num)
{
    int index = 0, i;
    int quoitent = 0, remainder = 0;
    int buf[256] = {0};
    int sum = num;
    do
    {
        quoitent = sum;
        for(i = 0; i < index; ++i)
        {
            buf[i] = 0;
        }
        index = 0;
        sum = 0;
        do
        {
            remainder = quoitent%10;
            buf[index] = remainder;
            index++;
            quoitent /= 10;
        }while(quoitent);
        for(i = 0; i < index; ++i)
        {
            sum += buf[i];
        }
    }while(sum >= 10);
    return sum;
}

int main()
{
    int x;
    printf("Please Enter A Number: ");
    scanf("%d", &x);
    printf("Digits: %d\n", addDigits(x));
    return 0;
}
