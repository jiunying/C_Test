#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    int data;
    struct Tree *L;
    struct Tree *R;
}TREE;
TREE *head = NULL;

void createTree();


int min(int a, int b)
{
    return (a <= b)? a : b;
}

int getMinimumDifference(TREE* root)
{
    int MiniDif, MiniR, MiniL;
    if(!root)
    {
        return 0;
    }
    if(root->R && root->L)
    {
        int RD = abs(root->R->data - root->data);
        int LD = abs(root->L->data - root->data);
        MiniDif = min(RD, LD);
        MiniL = getMinimumDifference(root->L);
        MiniR = getMinimumDifference(root->R);
        return min(MiniDif, min(MiniL, MiniR));
    }
    else if(root->R)
    {
        int RD = abs(root->R->data - root->data);
        MiniDif = RD;
        MiniR = getMinimumDifference(root->R);
        return min(MiniDif, MiniR);
    }
    else if(root->L)
    {
        int LD = abs(root->L->data - root->data);
        MiniDif = LD;
        MiniL = getMinimumDifference(root->L);
        return min(MiniDif, MiniL);
    }
    else
    {
        return root->data;
    }
}

int main()
{
    createTree();
    printf("Minimum Absolute Difference in BST is %d\n", getMinimumDifference(head));
    return 0;
}

void createTree()
{
/*
     3
    / \
   18 20
      / \
     15  7
*/
    {
        TREE *new = (TREE *)malloc(sizeof(TREE));
        new->data = 3;
        new->L = NULL;
        new->R = NULL;
        if(head == NULL)
        {
            head = new;
        }
    }


    {
        TREE *p = head, *new;
        new = (TREE *)malloc(sizeof(TREE));
        new->data = 18;
        new->L = NULL;
        new->R = NULL;
        if(p->L == NULL)
        {
            p->L = new;
        }
    }

    {
        TREE *p = head, *new;
        new = (TREE *)malloc(sizeof(TREE));
        new->data = 20;
        new->L = NULL;
        new->R = NULL;
        if(p->R == NULL)
        {
            p->R = new;
        }
    }

    {
        TREE *p = head, *new;
        new = (TREE *)malloc(sizeof(TREE));
        new->data = 15;
        new->L = NULL;
        new->R = NULL;
        p = p->R;
        if(p->L == NULL)
        {
            p->L = new;
        }
    }

    {
        TREE *p = head, *new;
        new = (TREE *)malloc(sizeof(TREE));
        new->data = 7;
        new->L = NULL;
        new->R = NULL;
        p = p->R;
        if(p->R == NULL)
        {
            p->R = new;
        }
    }
}
