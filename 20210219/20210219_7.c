/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/
#include <stdio.h>
#define ROW_1 3
#define ROW_2 7
#define COL_1 8
#define COL_2 13

struct point{
    int x;
    int y;

};
struct point makepoint (int x, int y){
    struct point make;
    make.x = x;
    make.y = y;
    return make;
}
int main(){
    struct point a = makepoint(ROW_1,COL_1);
    struct point b = makepoint(ROW_2,COL_2);
    printf("Coordinates A(%d,%d)\n",a.x,a.y);
    printf("Coordinates B(%d,%d)\n",b.x,b.y);
    return 0;
}