/*2. Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t.*/
#include <stdio.h>
#define FIVE 5
#define SIX 6
#define SWAP(t,x,y) {t z = x;x = y;y = z; } 

int main(){
    int a = FIVE;
    int b = SIX;
    printf("Before swap:\na = %d\nb = %d\n",a,b);
    SWAP(int,a,b);
    printf("After swap:\na = %d\nb = %d\n",a,b);
    return 0;

}