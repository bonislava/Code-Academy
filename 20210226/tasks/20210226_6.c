/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.*/

#include <stdio.h>
#define SIZE 10
#define NUM 41

typedef struct My {
    char arr[SIZE];
    int num; 
}key_t;
int main(){
    key_t key={"test",NUM};
    printf("arr: %s, num: %d\n",key.arr,key.num);
    return 0;
}
