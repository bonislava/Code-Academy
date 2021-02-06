/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/
#include <stdio.h>

int check();
int linSearch(int a[], int l, int d);

int main(){
    int a[] = {1,2,5,6,9,12,14,18};
    int l = sizeof(a)/4;
    int d = check();

    if(linSearch(a,l,d) != -1){
        printf("is in arr on position : %d\n",linSearch(a,l,d));
    }else{
        printf("is not in the arr");
    }
    return 0;
}
int check(){
    int x;
    printf("Enter num to check \n");
    scanf("%d",&x);
    return x;
}
int linSearch(int a[], int l, int d){
    int i;
    for(i=0; i<l; i++){
        if(a[i] == d){
            return i;
        }
    }
    return -1;
}
