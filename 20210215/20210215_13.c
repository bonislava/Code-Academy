/*Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/
#include <stdio.h>

int main(){
    char s[] = "String length";
    int len = 0;
    char *p;
    p = s;
    while (*p++){
        len++;
    }
    printf("%d\n", len);
    return 0;
}