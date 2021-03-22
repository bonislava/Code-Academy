#include "taskfunc.h"

int main(){
    char arr[SIZE],c;
    printf("\nPlease Enter any String : \n");
    scanf("%s", arr);
    lowercase(arr);
    c = find_duplicate(arr);
    remove_duplicates(arr,c);
    uppercase(arr);
    printf("New string is :\n%s \n", arr);
	
    return 0;
}
