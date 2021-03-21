/*Дадена е последователност от букви /на латиница/.
 Съставете програма, която простроява от дадената последователност
 нова последователност от букви, несъдържаща повтарящи се букви
 и всички малки букви ги преобразува в съответните големи.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 30

void remove_duplicates(char *arr,char c);
int uppercase(char arr[]);
int lowercase(char arr[]);
char find_duplicate(char *arr);

 
int main(){
    char arr[SIZE],c;
    int i;
    printf("\nPlease Enter any String : \n");
  	scanf("%s", arr);
  	lowercase(arr);
    c = find_duplicate(arr);
  	remove_duplicates(arr,c);
    uppercase(arr);
    printf("New string is :\n%s \n", arr);
	
  	return 0;
}
int lowercase(char arr[]){
    int i = 0; 
    while(arr[i] != '\0') {
        arr[i] = tolower(arr[i]);
        i++; 
    }
    return 0;
    
}
void remove_duplicates(char *arr,char c){
	int i,k=0;
    for(i=0;arr[i];i++){
     	arr[i]=arr[i+k];     	
     	if(arr[i]==c){
		  k++;
		  i--;
        }
    }
}
char find_duplicate(char *arr){
	char c='*';
	int i,j;
    for(i=0;arr[i];i++){
    	if(!(arr[i]==c)){
    		for(j=i+1;arr[j];j++){
            	if(arr[i]==arr[j])
            	   arr[j]=c;
		}
	}	
    }  
	return c;
  	 
}
int uppercase(char arr[]){
    int i = 0;
    while(arr[i] != '\0') { 
        arr[i] = toupper(arr[i]);
        i++; 
    } 
    return 0;
}
