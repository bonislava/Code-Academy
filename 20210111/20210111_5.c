#include <stdio.h>
/*зад 5:Като резултат
*функцията обръща бита на съответната позиция в
числото (съответно от 0 на 1 или от 1 на 0).*/

int obarniBitNa(int number, int index);

int main(){

    int number = 13;
    int index = 7;
    
    printf("%d\n", obarniBitNa(number, index));

    return 0;
}

int obarniBitNa(int number, int index) {
    int mask = (1u << index);

    return (number ^ mask);
}