/*Задача 6.Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char *buff = NULL;
    char c,*p;
    int size = 2, i = 0;
    printf("Enter symbols\n");
    printf("to stop (ctrl + z)\n");
    buff = (char*)malloc(sizeof(char)*size);
    while ((c = getchar()) != EOF){
           i++;
           p = realloc(buff,i*sizeof(char));
           if(p != NULL){
               buff = p;
               buff[i - 1] = c;
        }
    }
    i++;
    p = realloc(buff,i*sizeof(char));
    if(p!=NULL){
        buff = p;
        buff[i-1] = '\0';
    }
    printf("Entered symbols : \n%s\n", buff);
    free(buff);
    return 0;
}