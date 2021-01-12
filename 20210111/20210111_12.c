#include <stdio.h>
/*зад12:Вдигнете всички битове на число, на позиции делящи
се на 3.*/

int Vdigni(int number);

int main(){
    int x=378;
    printf("%d",Vdigni(x));
    return 0;
}
int Vdigni(int number){
    unsigned int mask =0x555;
    return(number|mask);
}