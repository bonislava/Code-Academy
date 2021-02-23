/*Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define NUM 20

union values{
    char arr[SIZE];
    int x;
    float y;
};
int main(){
    union values a = {NUM};
    printf("num: %d,float num: %f,text: %s\n",a.x,a.y,a.arr);
    return 0;
}