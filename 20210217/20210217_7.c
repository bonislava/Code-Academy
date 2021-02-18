/*Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. 
Може ли да оптимизирате тази задача и да не се налага да въртим два
цикъла?
Как бихте направили същото, използвайки case?*/
#include <stdio.h>
#include <stdlib.h>
#define NUM 26

int *countAlphabet(char*p);

int main(){
    char arr[] = "No one, not even Matt Groening himself, could've imagined that The Simpsons would become as big as it did. Nor could anyone anticipate it could become so cultural.";
    int *p;
    p = countAlphabet(arr);
    return 0;
}
int *countAlphabet(char *p){
    int *Occurance = NULL;
    Occurance = (int *)calloc(NUM, sizeof(int));
    int i;
    while(*p){
        if(*p >= 'a' && *p <= 'z'){
            i = *p - 'a';
            (*(Occurance + i))++;
        }
        *p++;
    }
    for (i = 0; i < NUM; i++){
        printf("%c occurs %d times in the string.\n", (i + 'a'), *(Occurance + i));
    }
    return Occurance;
    free(Occurance);
}
