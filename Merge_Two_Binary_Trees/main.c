#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}node_t;

static inline node_t* createNode(int v)
{
    node_t *new = malloc(sizeof(node_t));
    new->val = v;
    new->left = NULL;
    new->right = NULL;
    return new;
}

static void treeTraversal(node_t *t)
{
    if (!t)
        return;
    printf("%2d\n", t->val);
    treeTraversal(t->left);
    treeTraversal(t->right);
}

static node_t *createTree1(void)
{
    node_t *p = NULL, *t = NULL;
    if (!t)
        t = createNode(1);
    p = t;
    if (!p->left)
        p->left = createNode(3);
    if (!p->right)
        p->right = createNode(2);
    p = t->left;
    if (!p->left)
        p->left = createNode(5);
    return t;
}

static node_t* createTree2(void)
{
    node_t *p = NULL, *t = NULL;
    if (!t)
        t = createNode(2);
    p = t;
    if (!p->left)
        p->left = createNode(1);
    if (!p->right)
        p->right = createNode(3);
    p = t->left;
    if (!p->right)
        p->right = createNode(4);
    p = t->right;
    if (!p->right)
        p->right = createNode(7);
    return t;
}

static void freeTree(node_t *t)
{
    if (t->left)
        freeTree(t->left);
    if (t->right)
        freeTree(t->right);
    node_t *p = t;
    t = NULL;
    free(p);
}


static node_t* mergeTree(node_t *t1, node_t *t2)
{
    node_t *r = NULL;
    if (!t1 && !t2)
    {
        return r;
    }
    else if (!t1)
    {
        t1 = createNode(0);
    }
    else if (!t2)
    {
        t2 = createNode(0);
    }
    r = createNode(t1->val + t2->val);
    r->left = mergeTree(t1->left, t2->left);
    r->right = mergeTree(t1->right, t2->right);
    return r;
}

int main()
{
    node_t *t1 = createTree1();
    node_t *t2 = createTree2();
    node_t *m_t = mergeTree(t1, t2);
    treeTraversal(t1);
    printf("--------------\n");
    treeTraversal(t2);
    printf("--------------\n");
    treeTraversal(m_t);
    freeTree(t1);
    freeTree(t2);
    freeTree(m_t);
    return 0;
}
