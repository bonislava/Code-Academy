/*Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични*/
#include<stdio.h>
void DecimalToBinary();

int main(){
    DecimalToBinary();
    return 0;
}
void DecimalToBinary(){
    int a[10],x,i;
    printf("Enter a number to convert: ");
    scanf("%d",&x);
    for(i=0;x>0;i++)
    {
        a[i]=x%2;
        x=x/2;
    }
    printf("\nThe binary of given number is = ");
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
}