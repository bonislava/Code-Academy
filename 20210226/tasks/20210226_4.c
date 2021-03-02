/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/

#include <stdio.h>

typedef int (*sum)(int,int);
int plus(int x, int y){
    return(x + y);
}

int main(){
    sum p =NULL;
    p =&plus;
    printf("a + b = %d",p(4,5));
    return 0;

}