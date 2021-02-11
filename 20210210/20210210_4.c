/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/
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
    char password[7];
    char *p;
    for(p = password; p < password + 6; p++){
        *p = (rand() % 26) + 97;
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
