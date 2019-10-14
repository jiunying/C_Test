#include <stdio.h>
#include <stdlib.h>

char **fizzBuzz(int n, int *returnSize)
{
    char **str;
    *returnSize = n;
    str = malloc(n*sizeof(char*));
    int i;
    for(i = 1; i <= n; ++i)
    {
        if((i%3)==0 && (i%5)==0)
        {
            str[i-1] = "FizzBuzz";
        }
        else if(i%3 == 0)
        {
            str[i-1] = "Fizz";
        }
        else if(i%5 == 0)
        {
            str[i-1] = "Buzz";
        }
        else
        {
            str[i-1] = malloc(128*sizeof(char));
            sprintf(str[i-1], "%d", i);
        }
    }
    return str;
}

int main(void)
{
    char **output_str;
    int num, i, size;
    printf("Please Enter A Number: ");
    scanf("%d", &num);
    output_str = fizzBuzz(num, &size);
    printf("Return:\n");
    for(i = 0; i < size; ++i)
    {
        printf("%d:%s\n", i+1, output_str[i]);
    }
    for(i = size-1; i <=0; --i)
    {
        free(output_str[i]);
    }
    free(output_str);
    return 0;
}
