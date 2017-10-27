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

int sumOfLeftLeaves(TREE* root)
{
    if(!root) return 0;
    if(root->L && !root->L->L && !root->L->R)
    {
        return root->L->data + sumOfLeftLeaves(root->R);
    }
    return sumOfLeftLeaves(root->L) + sumOfLeftLeaves(root->R);
}

int main()
{
    createTree();
    printf("sum of Left Leaves is %d\n", sumOfLeftLeaves(head));
    return 0;
}

void createTree()
{
/*
     3
    / \
   9  20
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
        new->data = 9;
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
