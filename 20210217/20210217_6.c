/*Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/
#include <stdio.h>
#include <string.h>
#define CA 'a'

int main(){
    char arr[100];
    int len;
    int i = 0, count = 0;
    memset(arr,'\0',sizeof(arr));
    strcpy(arr,"This is a string to test my idea for search in a char and ....");
    len = strlen(arr);
    printf("length of the string is %d\n",len);
    while(arr[i]!='\0'){
        if(CA==arr[i]){
            count++;
        }
        i++;
    }
    printf("Count of %c in the string is: %d",CA,count);
    return 0;
}