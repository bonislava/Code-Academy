/*Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};*/
#include <stdio.h>

#define NUM2 12
#define NUM3 4

union Uni{
    short x:6;
    char y:6;
};

int main(){
    union Uni one;
    one.x=NUM2;
    printf("int: %d\n",one.x);
    one.y=NUM3;
    printf("char: %c\n",one.y);
    return 0;
}
