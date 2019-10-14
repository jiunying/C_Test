#include <stdio.h>
#include <stdlib.h>

typedef struct T{
    int val;
    struct T *left;
    struct T *right;
} node_t;

static void treeTraversal(node_t *t)
{
    if (!t)
        return;
    printf("%2d\n", t->val);
    treeTraversal(t->left);
    treeTraversal(t->right);
}

static node_t* createNode(int v)
{
    node_t *new = malloc(sizeof(node_t));
    new->val = v;
    new->left = NULL;
    new->right = NULL;
    return new;
}

static node_t* createTree(void)
{
 /*
       4
      / \
     2   7
    / \ / \
   1  3 6   9
*/
    node_t *p = NULL, *t = NULL;
    if (!t)
        t = createNode(4);
    p = t;
    if (!p->left)
        p->left = createNode(2);
    if (!p->right)
        p->right = createNode(7);


    p = t->left;
    if (!p->left)
        p->left = createNode(1);
    if (!p->right)
        p->right = createNode(3);
    p = t->right;
    if (!p->left)
        p->left = createNode(6);
    if (!p->right)
        p->right = createNode(9);
    return t;
}

static node_t* invertTree(node_t *t)
{
    if(!t)
        return NULL;
    node_t *tmp;
    tmp = t->left;
    t->left = invertTree(t->right);
    t->right = invertTree(tmp);
    return t;
}

int main()
{
    node_t *tree = createTree();
    treeTraversal(tree);
    node_t *invert_tree = invertTree(tree);
    printf("==========\n");
    treeTraversal(invert_tree);
    return 0;
}
