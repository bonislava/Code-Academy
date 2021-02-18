/*Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM1 33
#define NUM2 89
#define NUM3 9
#define SIZE 10

int func();
int generator();

int main(){
    generator();
    func();

    return 0;
}
int generator(){
    srand(time(NULL));
    char password[SIZE];
    char *p;
    for(p = password; p < password + NUM3; p++){
        *p = NUM1 + rand() % NUM2;
    }
    *p = '\0';
    printf("your password is: %s\n",password);
    return 0;
}
int func(){
    int choice;
    choice:
    printf("save your pass 1.\n");
    printf("new pass press 2.\n");
    printf("exit 3.\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("we save your chosen pass"); 
            break;
        case 2:
            generator();
            goto choice;
            break;
        case 3:
            break;
    }
}