#include<stdio.h>
/*зад3: Функция,която прави на нула бита на
съответния индекс в числото.*/

int iz4istiBitna(int number, int index);

int main(){
    int number = 54;
    int index = 2;
    printf("%d",iz4istiBitna(number,index));

    return 0;
}
int iz4istiBitna(int number, int index){
    int mask = (1u << index);
    mask = ~mask;

    return (number&mask);
}