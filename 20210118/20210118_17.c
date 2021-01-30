/*Упражнение 17* Направете генератор на случайни числа по следния
алгоритъм (xorshift):
int A = 1, акумулатор с начална стойност
При всяко вземане на число от генератора се прави следното:
(i) A ^= A << 13;
(ii) A ^= A >> 17;
(iii) A ^= A << 5;
При всяка итерация изведете числото на екрана.
(Направете вариация с акумулатор long long int)*/
#include<stdio.h>

int main(){
    long long int A = 145464751111;
    A ^= A << 13;
    printf("A = %lld\n",A);
    A ^= A >> 17;
    printf("A = %lld\n",A);
    A ^= A << 5;
    printf("A = %lld\n",A);

    return 0;

}