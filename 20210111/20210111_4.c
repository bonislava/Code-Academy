#include <stdio.h>
/*зад4 :Функцията трябва
*да "вдига" бита на съответния индекс в числото (под
"вдига" ще разбираме да му присвои стойност 1).*/

 int vdigniBitna(int number, int index);

int main(void){

    int number = 14;
    int index = 5;
    printf("%d\n", vdigniBitna(number, index));

    return 0;
}
int vdigniBitna(int number, int index) {
    int mask = (1u << index);

    return (number|mask);

}