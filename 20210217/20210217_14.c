/*Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск.*/
#include <stdio.h>
#include <string.h>
#define SIZE 26
#define NUM1 97

int anagram(char x[], char y[]);

int main(){
    char arr1[]="reklama";
    char arr2[]="karamel";
    char arr3[]="bosilek";
    char arr4[]="obelisk";
    anagram(arr1,arr2);
    anagram(arr3,arr4);

    return 0;
}

int anagram(char x[], char y[]){
    int arr5[SIZE] ={0};
    int arr6[SIZE] ={0};
    if (strlen(x)==strlen(y)){
        for(int i=0; i<strlen(x);i++){
           
            arr5[x[i]-NUM1]++;
        }
        for(int i=0; i<strlen(y);i++){
           
            arr6[y[i]-NUM1]++;
        }
        for(int i=0; i<SIZE; i++){
            if(arr5[i]!=arr6[i]){
                printf("they aren't anagrams\n");
            }
        }
        printf("they are anagrams\n");
    }else{
        printf("they aren't anagrams\n");
    }
    
}
