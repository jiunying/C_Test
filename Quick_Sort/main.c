#include <stdio.h>

#define MAX 15

static void swapFun(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


static void quickSort(int array[], int left, int right)
{
    int p = array[left];
    int i = left + 1;
    int j = right;
    if (left >= right)
        return;
    while (1)
    {
        while (i <= right)
        {
            if (array[i] > p)
                break;
            i++;
        }
        while (j > left)
        {
            if (array[j] < p)
                break;
            j--;
        }
        if (j < i)
            break;
        swapFun(&array[i], &array[j]);
    }
    swapFun(&array[left], &array[j]);
    quickSort(array, left, j-1);
    quickSort(array, j+1, right);
}

int main()
{
    int i;
    int array[15] = {23, 11, 45, 79, 35, 32, 56, 77, 29, 10, 45, 68, 22, 16, 74};
    for (i = 0; i < MAX; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    quickSort(array, 0, MAX-1);
    for (i = 0; i < MAX; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
