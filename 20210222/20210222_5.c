/*Направете масив от 10 структури от задача 4. 
Задайте стойност на 10 -те дати, по избор*/
#include <stdio.h>
#include <string.h>
#define SIZE 10

struct date{
    int day;
    int month;
    int year;
};
int main(){
    int i;
    struct date arri[SIZE] ={
        {11, 2, 2015},
        {2, 7, 2019},
        {14, 9, 2005},
        {5, 5, 2004},
        {20, 6, 2020},
        {14, 1, 2006},
        {18, 3, 2011},
        {24, 8, 2016},
        {30, 5, 2018},
        {29, 4, 2017},
    };
    for(i = 0; i < SIZE; i++){
        printf("arr[%d]: %d.%d.%d\n", i, arri[i].day, arri[i].month, arri[i].year);
    }
    return 0;
}
/*struct date arri[SIZE] = { [1] = {11,2,2015} }; /* define and init array members */
/*struct date arri[SIZE] = {[1].month = 11,[1].year = 2015}; /* define and init array members */