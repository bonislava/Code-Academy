#include<stdio.h>
/*зад10:Премахнете всички битове на число след n-тия бит
включително.*/

int Del(int number,int index);

int main(){
    int x=322;
    int y=4;
    printf("%d",Del(x,y));
    return 0;
}
int Del(int number,int index){
    int mask = ~mask;
    mask =mask<<(index-1);
    mask=~mask;
    return(number&mask);
}