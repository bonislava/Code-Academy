/*Задача 3.Какво е грешното на този код?
void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
}*/
#include <stdio.h>

void my_strcpy(char *t,char *s);

int main(){
    char *t = "zdravei";
    char *s = "kakvo pravish";
    my_strcpy(t,s);

    return 0;
}
/*липсва проверка за край на стринг('\0'). *t ще се копира в *s,
 *но след края му,s ще продължи да отпечатва до края на *s*/
void my_strcpy(char *t, char *s){
    for(; *t; t++, s++)
    *s = *t;
}