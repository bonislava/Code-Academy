/*Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar();*/
#include<stdio.h>

int main(){
    int c;
    int line_count = 0;
    while((c == getchar()) != EOF){
        if(c == '\n'){
            line_count ++;
        }
        printf("%d lines", line_count);
        return 0;
    }
}