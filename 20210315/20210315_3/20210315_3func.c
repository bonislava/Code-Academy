#include "20210315_3.h"
t_nodeTree *insert(int d){
    t_nodeTree *tmp = (t_nodeTree*)malloc(sizeof(t_nodeTree));
    t_nodeTree *current= NULL;
    t_nodeTree *parent = NULL;
    tmp->data = d;
    tmp->right = tmp->left = NULL;
    if(NULL == root){
        root = tmp;
    }
    else{
        current = root;
        while(1){
            parent = current;
            if(d < parent->data){
                current = current->left;
                if(current == NULL){
                    parent->left = tmp;
                    return tmp;
                }
            }else{
                current = current->right;
                if(current == NULL){
                    parent->right = tmp;
                    return tmp;
                }
            }
        }
    }
}
void preorder(t_nodeTree *n){
    if(n){
        printf("%d  ", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}