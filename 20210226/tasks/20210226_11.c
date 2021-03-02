/*Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *p;
    int x;
}t_node;
int main(){
    typedef t_node *t_p;
    t_p type = (t_p)malloc(sizeof(t_node));
    printf("size of type : %d",sizeof(type));
    free(type);
    return 0;
}