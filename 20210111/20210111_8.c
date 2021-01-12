#include <stdio.h>
/*зад 8:Намерете позицията на най-старшия бит, който е със
стойност 1 в дадено число.*/

int OldBit (int number);

int main (){
    int x=42;
    printf ("%d\n", OldBit(x));
    return 0;
}

int OldBit (int number){
    int a=-1;
    while (number!=1){
        number=number>>1;
        a++;
    }
    return a;
}