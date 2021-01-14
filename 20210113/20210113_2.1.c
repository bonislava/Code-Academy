/*2. Да направим функция, която ще принтира числата от
десетичен в бинарен вид:*/
#include<stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}
int main(void){
    char a=10;
    bin(a);
    char x=255;
    bin(x);
    
    return 0;
}