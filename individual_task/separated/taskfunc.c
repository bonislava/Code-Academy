#include "taskfunc.h"

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