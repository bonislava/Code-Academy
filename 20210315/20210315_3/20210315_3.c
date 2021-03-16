/*Задача 3. Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове:
а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
Да се сравнят получените дървета. Какви изводи могат
да се направят?*/
#include "20210315_3.h"
#define SIZE 13

treeNode_t *root = NULL, *a, *b, *c, *d, *e;

int main(void){
    int i;
    int arr1[SIZE] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    for(i=0;i<SIZE;i++){
        insert(arr1[i]);
    }
    a = root;
    printf("\n");
    preorder(a);
    root = NULL;

    int arr2[SIZE] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
    for(i=0;i<SIZE;i++){
        insert(arr2[i]);
    }
    b = root;
    printf("\n");
    preorder(b);
    root = NULL;

    int arr3[SIZE] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
    for(i=0;i<SIZE;i++){
        insert(arr3[i]);
    }
    c = root;
    printf("\n");
    preorder(c);
    root = NULL;

    int arr4[SIZE] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
    for(i=0;i<SIZE;i++){
        insert(arr4[i]);
    }
    d = root;
    printf("\n");
    preorder(d);
    root = NULL;

    int arr5[SIZE] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};
    for(i=0;i<SIZE;i++){
        insert(arr5[i]);
    }
    e = root;
    printf("\n");
    preorder(e);
    root = NULL;
    return 0;
}
