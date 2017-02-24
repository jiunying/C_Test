#include <stdio.h>


int missingNumber(int* nums, int numsSize) 
{
#if 0
    int sum = numsSize;
    int i;
    for(i = 0; i < numsSize; ++i)
    {
        sum += i - nums[i];
    }
    return sum;
#endif
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
