/*Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.*/
#include<stdio.h>

float STr(float a,float b);
float SQ(float a,float b);

int main(){
    float a,b;
    printf("Enter a value of a:\n");
    scanf("%f",&a);
    printf("Enter a value of b:\n");
    scanf("%f",&b);
    printf("The area of 3 angle is: %f\n",STr(a,b));
    printf("The area of 4angle is :%f\n",SQ(a,b));
    return 0;
}
float STr(float a,float b){
    return a*b/2;
}
float SQ(float a,float b){
    return STr(a,b)*2;
}