/*Задача 1.Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата*/
#include<stdio.h>

const float pi = 3.14;
double CircleArea(double r);

int main(void){
    double r;
    printf("Enter a value for r: ");
    scanf("%lf",&r);
    printf("The are of the Circle is %lf\n",CircleArea(r));
    return 0;
}
double CircleArea(double r){
    return pi*r*r;
}