/*Задача 4. Специални символни литерали*/

#include <stdio.h>

int main() {
    int i;
    char arrEscChar[] = { '\t', '\n', '\r', '\v', '\\', '\'','\"', '\?', '\a', '\b', '\f' };
    for (i = 0; i < sizeof(arrEscChar)/sizeof(char); i ++) {
        printf("Escape Character %d '%c'\n",
        (int)(arrEscChar[i]), arrEscChar[i]);
        }
        return 0;
}