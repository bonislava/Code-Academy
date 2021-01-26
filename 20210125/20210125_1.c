/*Пребройте символите, подавани на конзолата, с
функцията getchar(); */
#include<stdio.h>

int main(){
    int c;
    int counter = 0;
    while((c = getchar()) != EOF){
        counter ++;
    }
    printf("\nThe number of symbols is%d", counter);
    return 0;
}