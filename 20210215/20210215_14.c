/*Решете задачата за генериране на 6 буквена парола с
пойнтери.*/
#include <stdio.h>
#include <stdlib.h>
#define num1 26
#define num2 97

int func();
int generator();

int main(){
    generator();
    func();

    return 0;
}
int generator(){
    char password[7];
    char *p;
    for(p = password; p < password + 6; p++){
        *p = (rand() % num1) + num2;
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
