/*адача 2. какъв ще бъде резултатът в променливата true:
int x = 10;
int y = 10;
int z = 30;
int true = x==y+(z < y)!=20;*/

#include<stdio.h>

int main(){
    int x = 10;
    int y = 10;
    int z = 30;
    int true = x==y+(z < y)!=20;
    printf("true = %d\n",true); /* резултатът ще е ревен на 1,защото 1-во: гледат се скобите . (30<10)-false =0;
                                 * 2-ро: гледа се операторът за сравнение(равно),който е вярен х==y ,следователно е true =1 
                                 * 3-то: е операторът за сравнение(неравно) на 20,което също е true =1
                                 * следователно true ще е равно на единица. */
    printf("(z < y) = %d\n",(z < y));
    printf("x == y  = %d\n",x==y);
    return 0;
}