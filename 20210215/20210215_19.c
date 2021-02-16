/*Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Baba, kaka, mama";
    for(int i = 0; i < strlen(str); i++){
        if(str[i]=='a'){
            str[i]='o'; 
        }
    }
    printf("%s",str);
    return 0;
}