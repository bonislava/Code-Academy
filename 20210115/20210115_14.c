/*Зада 14. Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main()
принтирайте стойността на глобалната променлива.*/
#include <stdio.h>

int g1 = 1;
void test();
int main() {
    test();
    test();
    test();
    printf("%d",g1);
return 0;
}
void test(){
 g1++;
}