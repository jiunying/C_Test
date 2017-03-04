#include <stdio.h>
#include <stdlib.h>

//#define PRE_ORDER
//#define IN_ORDER
#define POST_ORDER

typedef struct T
{
    char v;
    struct T *R;
    struct T *L;
}TREE;

TREE *head = NULL;

void createNewTree();

void treeTraversal(TREE *T)
{
    if(!T)
    {
        return ;
    }
#ifdef PRE_ORDER
    printf("%c\n", T->v);
    treeTraversal(T->L);
    treeTraversal(T->R);
#endif
#ifdef IN_ORDER
    treeTraversal(T->L);
    printf("%c\n", T->v);
    treeTraversal(T->R);
#endif
#ifdef POST_ORDER
    treeTraversal(T->L);
    treeTraversal(T->R);
    printf("%c\n", T->v);
#endif
}

int main()
{
    createNewTree();
    treeTraversal(head);
    return 0;
}

void createNewTree()
{
/*
 *      A
 *     / \
 *    B   C
 *   / \ / \
 *  D  E F  G
*/
    {
        TREE *new = malloc(sizeof(TREE));
        new->v = 'A';
        new->R = NULL;
        new->L = NULL;
        if(!head)
        {
            head = new;
        }
    }
    {
        TREE *new = malloc(sizeof(TREE));
        new->v = 'B';
        new->R = NULL;
        new->L = NULL;
        TREE *p = head;
        if(!p->L)
        {
            p->L = new;
        }
    }
    {
        TREE *new = malloc(sizeof(TREE));
        new->v = 'C';
        new->R = NULL;
        new->L = NULL;
        TREE *p = head;
        if(!p->R)
        {
            p->R = new;
        }
    }
    {
        TREE *new = malloc(sizeof(TREE));
        new->v = 'D';
        new->R = NULL;
        new->L = NULL;
        TREE *p = head;
        p = p->L;
        if(!p->L)
        {
            p->L = new;
        }
    }
    {
        TREE *new = malloc(sizeof(TREE));
        new->v = 'E';
        new->R = NULL;
        new->L = NULL;
        TREE *p = head;
        p = p->L;
        if(!p->R)
        {
            p->R = new;
        }
    }
    {
        TREE *new = malloc(sizeof(TREE));
        new->v = 'F';
        new->R = NULL;
        new->L = NULL;
        TREE *p = head;
        p = p->R;
        if(!p->L)
        {
            p->L = new;
        }
    }
    {
        TREE *new = malloc(sizeof(TREE));
        new->v = 'G';
        new->R = NULL;
        new->L = NULL;
        TREE *p = head;
        p = p->R;
        if(!p->R)
        {
            p->R = new;
        }
    }
}
