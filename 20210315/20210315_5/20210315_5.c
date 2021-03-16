/*Задача 5. Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво.*/
#include "20210315_5.h"
#define SIZE 9

treeNode_t *root = NULL,*t;

int main(){
    int i;
    int arr[SIZE] = {2, 6, 3, 10, 1, 7, 9, 8, 11};
    for(i = 0; i < SIZE; i++){
        insert(arr[i]);
    }
    t = root;
    preorder(t);
    printf("\nsearch_rec :%d",(search_rec(t, 10))->data);

    return 0;
}