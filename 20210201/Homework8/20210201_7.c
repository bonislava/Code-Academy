/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/

/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/

#include <stdio.h>

int Multiplication(int x);

int main(){
    printf("The rezult is : %ld",Multiplication(30));
    return 0;
}
int Multiplication(int x){
    int m = 1;
    if(x > 1){
        return x*Multiplication(x-1);
    }
    return m;
}
