/*Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */
#include<stdio.h>

const float pi = 3.14;
double Area();
double CircleArea(double r);

int main(void){
    printf("The area of the Circle is %lf\n",Area());
    return 0;
}
double Area(){
    double r;
    printf("Enter a value for radius: ");
    scanf("%lf",&r);
    return CircleArea(r);
}
double CircleArea(double r){
    return pi*r*r;
}