#include<stdio.h>
/*зад 0 :Декларирайте функция, която събира две числа и връща резултата им*/

int addDigit(int a,int b);

int main(void){
    int a,b;
    a = 5; 
    b = 7; 
    addDigit(a,b); 
    return 0;
}
int addDigit(int a,int b){
    int sum;
    sum = a + b;
    printf("%d\n",sum); 
    return 0;
}