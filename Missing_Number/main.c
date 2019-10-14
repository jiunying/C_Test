#include <stdio.h>


static int missingNumber(int* nums, int numsSize)
{
    int xor = numsSize;
    int i;
    for(i = 0; i < numsSize; ++i)
    {
        xor ^= i ^ nums[i];
    }
    return xor;
}

int main()
{
    int missing_num;
    int buf[4] = {0, 1, 3, 4};
    missing_num = missingNumber(buf, 4);
    printf("missing number is %d\n", missing_num);
    return 0;
}
