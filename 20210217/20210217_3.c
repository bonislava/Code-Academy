/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.*/
#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }
int fnMultiplication(int nA, int nB) { return(nA * nB); }
int fnDevision(int nA, int nB) { return(nA / nB); }

int (*func_ptr[4])()={fnPlus,fnMinus,fnMultiplication,fnDevision};

int main(){
    int x,a,b;
    printf("which function you like to use: \n");
    scanf("%d",&x);
    printf("enter num for a= \n");
    scanf("%d",&a);
    printf("Enter num for b= \n");
    scanf("%d",&b);
    switch(x){
        case 1:
            printf("plus = %d",func_ptr[0](a,b));
            break;
        case 2:
            printf("minus = %d",func_ptr[1](a,b));
            break;
        case 3:
            printf("Multiplication = %d",func_ptr[2](a,b));
            break;
        case 4:
            printf("Devision = %d",func_ptr[3](a,b));
            break;
    }
    return 0;
}

