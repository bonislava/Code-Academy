#include<stdio.h>
/*зад 1:Направете побитовите операции върху целите числа 3 и 5*/

int main(){
    int a,b;
    a = 3; /*(00000011)*/
    b = 5; /*(00000101)*/
    int res;
    res = a&b;
    printf("AND: %d\n", res);
    res = a|b;
    printf("OR: %d\n", res);
    res = a^b;
    printf("XOR: %d\n", res);
   
    return 0;
}
