#include <stdio.h>
#include <stdlib.h>

typedef struct nodeTree t_nodeTree;
typedef struct nodeTree
{
    int data;
    struct nodeTree *left;
    struct nodeTree *right;
} t_nodeTree;

extern t_nodeTree *root;

void preorder(t_nodeTree* n);
t_nodeTree *insert(int d);