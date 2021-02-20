/*Задача 10. Направете два триъгълника с отместване*/
#include <stdio.h>
#define SIZE 20
#define NUM 10

struct point{
    int x;
    int y;
};
int Triangle(struct point s);

int main(){
    struct point s = {SIZE,SIZE};
    s.x = NUM;
    s.y = NUM;
    Triangle(s);

    return 0;
}
int Triangle(struct point s){
    int i, j, z,l;

    for(i = 0; i < s.y; i++){
        for(j=0; j < i; j++){
            printf(" @ ");
	    }
        for(z=j; z< s.x; z++){
            printf("  ");
	    }
        for(l=z; l<(i+z); l++){
            printf(" @ ");
	    }
        printf("\n");
    }
}