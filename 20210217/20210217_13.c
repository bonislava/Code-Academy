/*Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'*/
#include <stdio.h>
#include <string.h>
#define SIZE 10

char *rev(char *arr);
int length(char *arr);

int main(void){
    char str[SIZE];
    printf("Enter a string:\n");
    gets(str);
    printf("Your string is: \n");
    puts(str);
    char *p;
    p = rev(str);
    printf("reversed: \n");
    puts(p);
    return 0;
}
char *rev(char *arr){
    int i;
    char *x,*y,temp;
    y = arr;
    while(*y){
        y++;
    }
    if(arr != y){
        for(x = arr; x < --y; ++x){
            temp = *y;
            *y = *x;
            *x = temp;
        }
    }
    return arr;
}
int length(char *arr){
    int length;
    while(*(arr+length) != '\0'){
        length++;
    }
    return length;
}
