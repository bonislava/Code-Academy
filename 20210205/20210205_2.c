/*Задача 2.Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията.*/
#include <stdio.h>

size_t my_strlen(char *s);

int main(){
    char *s = "My String";
    printf("Res: %lu\n",my_strlen(s));

    return 0;
}
size_t my_strlen(char *s){
    size_t y = 0u;
    while(*s++ != '\0'){
        y++;
    }
    return y;
}

