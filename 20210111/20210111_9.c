#include <stdio.h>
/*зад 9:Направете на нула битовете в числа, намиращи се на
позиции между 3 и 7.*/

int Inn(int number);

int main (){
    int x= 128;
    printf("%d\n", Inn(x));
    return 0;
}

int Inn (int number){
    int mask =(1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6);
    mask = ~mask;
    return (number&mask);
}