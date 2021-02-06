/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край.*/
#include <stdio.h>

int printArr(int a[], int l);

int main(){
    int a[] ={1,2,3};
    int l=sizeof(a)/4;
    printArr(a,l);
    return 0;
}
int printArr(int a[],int l){
    int i;
    for(i=0;i<l;i++){
        printf("%d\n",a[i]);
    }
}
