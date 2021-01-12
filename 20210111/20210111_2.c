#include<stdio.h>
/*зад2: Функция,която връща стойността на бита
на съответния индекс.*/

int VzemiBitna(int number,int index);

int main(){
    int number = 159;
    int index = 2; 
    printf("%d",VzemiBitna(number,index));

    return 0;
}
int VzemiBitna(int number, int index){
    int c;
    c = 1<<index-1;
    int res = number&c;
    res= res>>index-1;

    return res;
}