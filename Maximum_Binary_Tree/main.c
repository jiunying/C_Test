#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct T
{
    int value;
    struct T *left;
    struct T *right;
}s_tree;

static s_tree* constructMaximumBinaryTree(int* nums, int numsSize)
{
    s_tree *t = NULL;
    int i, max_index = 0, max_value = nums[0];
    int left_numsSize, right_numsSize;
    int *left_nums = NULL, *right_nums = NULL;
    s_tree *left_t = NULL, *right_t = NULL;
    for (i = 1; i < numsSize; ++i)
    {
        if (nums[i] > max_value)
        {
            max_index = i;
            max_value = nums[i];
        }
    }
    left_numsSize = max_index;
    if (left_numsSize > 0)
    {
        left_nums = malloc(sizeof(int) * left_numsSize);
        memcpy(left_nums, nums, sizeof(int)*left_numsSize);
        left_t = constructMaximumBinaryTree(left_nums, left_numsSize);
        free(left_nums);
    }
    right_numsSize = numsSize - (max_index + 1);
    if (right_numsSize > 0)
    {
        right_nums = malloc(sizeof(int) * right_numsSize);
        memcpy(right_nums, &nums[max_index+1], sizeof(int) * right_numsSize);
        right_t = constructMaximumBinaryTree(right_nums, right_numsSize);
        free(right_nums);
    }
    t = malloc(sizeof(s_tree));
    t->value = max_value;
    t->left = left_t;
    t->right = right_t;
    return t;
}

static void traceTree(s_tree *t)
{
    if (t != NULL)
    {
        printf("%d\n", t->value);
        traceTree(t->left);
        traceTree(t->right);
    }
}

static void freeTree(s_tree *t)
{
    if (t->left != NULL)
    {
        freeTree(t->left);
    }
    if (t->right != NULL)
    {
        freeTree(t->right);
    }
    free(t);
    t = NULL;
}

int main()
{
    int array[10] = {8, 1, 4, 6, 3, 9, 7, 2, 5};
    s_tree *t = constructMaximumBinaryTree(array, 9);
    if (!t)
    {
        printf("Oh no!! This tree is NULL.\n");
    }
    else
    {
        traceTree(t);
        freeTree(t);
    }
    return 0;
}
