#include <stdio.h>
/*зад 6:Променете стойността на бита на дадено число на
определена позиция.*/

int Bit(int number,int index);

int main()
{
    int number = 58;
    int index = 7;
    printf("%d\n", Bit(number,index));

    return 0;
}
int Bit(int number ,int index){
    int mask = (1u << index);
    
    printf("%d\n", number^mask);
    return 0;

}
