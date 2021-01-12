#include <stdio.h> 
/*зад 7:Занулете всички битове на числата, намиращи се на
четна позиция.*/

int NTE(int number);
int main(){

    int x = 12;
    printf("%d", NTE(x));

    return 0;
}
int NTE(int number)
{
    int mask = 0x555;
    return("%d",number^mask);
}
