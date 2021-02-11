/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/
#include <stdio.h>
#include <string.h>

int main(){
    char arr[50]; 
    char rra[50];  
    int i = 0, j = 0;
    int c;
    char *p;
    printf("Enter text: "); 
    while((c=getchar()) != '\n'){
        arr[i++] = c;
    }
    arr[i] = '\0';
    p = &arr[i-1];
    for(p; p >= arr; p--){
        rra[j++] = *p;
    }
    rra[j] = '\0';
    printf("reversed is: %s\n",rra);
    int res = strcmp(arr,rra);
    if(res==0)
        printf("is palindrome.");
    else
        printf("isn't palindrome.");
    return 0; 
}