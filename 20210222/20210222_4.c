/*Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?*/
#include <stdio.h>
#define DAY 15
#define MONTH 4
#define YEAR 2021

struct date{
    int day;
    int month;
    int year;
}Contractdate;/*1*/
int main(){
    struct date Contractdate = {DAY,MONTH,YEAR}; /*1*/
    printf("%d.%d.%d",Contractdate.day,Contractdate.month,Contractdate.year);/*1*/
    /*struct date Contractdate={.day = 15,.month = 4,.year = 2021};/2/
     *printf("%d.%d.%d",Contractdate.day,Contractdate.month,Contractdate.year);
    
     *struct date Contractdate;/3/
     *Contractdate.day=15;
     *Contractdate.month=4;
     *Contractdate.year=2021;
     *printf("%d.%d.%d",Contractdate.day,Contractdate.month,Contractdate.year); */  
    return 0;
}