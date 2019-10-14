#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE *head = NULL;


void pushData(int v)
{
    NODE *new;
    new = malloc(sizeof(NODE));
    if(new == NULL)
    {
        printf("memory is not enough!!\n");
        return;
    }
    new->data = v;
    new->next = NULL;
    if(head)
    {
        NODE *p = head;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = new;
    }
    else
    {
        head = new;
    }
    printf("push link list stack new data %d\n", new->data);
}

void popData()
{
    if(head)
    {
        NODE *p = head, *pp = head->next;
        if(p->next != NULL)
        {
            pp = p->next;
            while(pp->next != NULL)
            {
                p = pp;
                pp = pp->next;
            }
            p->next = NULL;
            free(pp);
        }
        else
        {
            free(p);
            head = NULL;
        }
        printf("pop stack last data\n");
    }
}

void listPrintf()
{
    if(head)
    {
        NODE *p = head;
        printf("**Status=> ");
        while(p)
        {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("\n");
    }
    else
    {
        printf("**Status=> Link List Stack is Empty\n");
    }
}


int main()
{
    int i;
    listPrintf();
    for(i = 1; i <= 5; ++i)
    {
        pushData(i);
        listPrintf();
    }
    for(i = 0; i < 5; ++i)
    {
        popData();
        listPrintf();
    }
    return 0;
}
