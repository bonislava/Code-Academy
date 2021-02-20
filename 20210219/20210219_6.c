/*Задача 6. Направете по подобен начин триъгълник:*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DIM_SIZE 15
#define NUM_1 5
#define NUM_2 10
#define NUM_3 0

struct point{
    int x;
    int y;
};

double area(struct point a, struct point b, struct point c) { 
   return fabs((a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y))/2.0);
} 


int check_point_inside(struct point a, struct point b, struct point c, struct point p){
    double tri_area = area(a,b,c);
    double a_area = area(a,b,p);
    double b_area = area(a,c,p);
    double c_area = area(b,c,p);
    
    return (int)(tri_area == a_area + b_area + c_area);
}

int main(){
    char field[DIM_SIZE][DIM_SIZE] = {'-'};
    
    struct point a = {NUM_1,NUM_1};
    struct point b = {NUM_3, NUM_2};
    struct point c = {NUM_2, NUM_2};
    
    char *el = field[0];
    for(int i=0; i<DIM_SIZE; i++){
        for(int j = 0; j<=DIM_SIZE; j++){
            struct point p;
            p.x = i;
            p.y = j;
            if(check_point_inside(a,b,c,p)){
                field[i][j] = '@';
            }else{
                field[i][j] = '-';
            }
        }
    }
    

    el = field[0];
    for(int i=0; i<DIM_SIZE; i++){
        for(int j = 0; j<=DIM_SIZE; j++){
            printf("%c",field[i][j]);
        }
        printf("\n");
    }
    return 0;
}

