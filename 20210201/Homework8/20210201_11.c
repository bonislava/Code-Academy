/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/
#include<stdio.h>

void squeeze(char s[],int c);

int main(){
    char s[] = "fucntionc is csqueceze";
    char x;
    squeeze(s,x);
    printf("%s\n",s);
}
void squeeze(char s[],int c){
    int i,j;
    for(i=j=0;s[i]!='\0';i++){
        if(s[i] != 'c'){
            s[j++]=s[i];
        }
    }
    s[j]='\0';
}