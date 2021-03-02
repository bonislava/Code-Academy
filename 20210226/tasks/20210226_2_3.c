/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.
Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/
#include <stdio.h>
int main(){
    typedef long long int t_Lint;
    t_Lint num = 1234506987657654364;
    printf("%lld",num);
    typedef t_Lint* t_prtint;
    t_prtint prtnum = &num;
    printf("\n%lld",*prtnum);
    return 0;
}

