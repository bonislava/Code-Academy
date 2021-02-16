/*Задача 15.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4.*/
#include <stdio.h>
#define size 35

void copy_str(char *str1,char *str2,char *str3,char *str4);

int main(){
    char str1[]="A string to be copied";
    char str3[]="I am very good in strings coping!";
    char str2[size],str4[size];
    copy_str(str1,str2,str3,str4);
    printf("%s\n",str2);
    printf("%s\n",str4);

    return 0;
}
void copy_str(char *str1,char *str2,char *str3,char *str4){
    while(*str1 != 0){
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
    while(*str3 != '\0'){
        *str4 = *str3;
        str3++;
        str4++;
    }
    *str4 = '\0';
}

