/*Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T)*/
#include "20210315_2.h"

treeNode_t* root = NULL;

int main(void){

    insertKey(10,&root);
    insertKey(9,&root);
    insertKey(8,&root);
    insertKey(7,&root);
    insertKey(6,&root);
    insertKey(5,&root);
    
    preorder(root);

    return 0;
}