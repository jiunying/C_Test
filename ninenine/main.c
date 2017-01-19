#include <stdio.h>

int count = 0;

void fun(int a, int b)
{
    if(b>9)
    {
        a++;
        b = 1;
    }
    if(a>9)
        return;
    printf("%02dx%02d=%02d  ", a, b, a*b);
    count++;

    fun(a, b+1);
}

int main()
{
   fun(1, 1);
   printf("total count = %d\n", count); 
   return 0;
}
