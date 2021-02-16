/*Задача 18. Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава.*/
#include <stdio.h>
#include <string.h>
#define size

int main(){
    char str1[size];
    char str2[size];
    char *str3 = "A string to be copied!";
    char *str4 = "I am very good in strings coping!";
    
    memset(str1,'\0',sizeof(str1));
    strcpy(str1,str3);
    printf("%s\n",str1);

    memset(str2,'\0',sizeof(str2));
    strcpy(str2,str4);
    printf("%s\n",str2);

    for(int i = strlen(str1)-1; i >= 0; i--){
        printf("%c",str1[i]);
    }
    printf("\n");
    for(int i = strlen(str2)-1; i >= 0; i--){
        printf("%c",str2[i]);
    }
    return 0;
}
