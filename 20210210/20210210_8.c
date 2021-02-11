/*Решете задачата за генериране на 6 буквена парола с
пойнтери.*/
#include <stdio.h>
#include <stdlib.h>

int func();
int generator();

int main(){
    generator();
    func();

    return 0;
}
int generator(){
    char password[6];
    char *p;
    for(p = password; p < password + 6; p++) {
        *p = (rand() % 26) + 97;
    }
    *p = '\0';
    printf("your password is: %s\n",password);
    return 0;
}
int func(){
    int choice;
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
            break;
        case 3:
            break;
    }
}
