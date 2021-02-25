/*Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/
#include <stdio.h>
#include <stdlib.h>
#define TWELVE 12
#define ONE 1
#define THIRTY_ONE 31
#define ZERO 0
#define YEAR 2021

struct date{
    int day : 6;
    int month : 6;
    int year : 12;
}__attribute__((packed));
struct date valid(struct date first){
    int day, month, year;
    printf("Enter day: \n");
    scanf("%d", &day);
    if(day < ONE){
        printf("Enter a valid day:\n");
        scanf("%d", &day);
    }
    if(day > THIRTY_ONE){
        printf("Enter a valid day\n");
        scanf("%d",&day);
    }
    first.day = day;
    printf("size of day %d\n",sizeof(day));

    printf("Enter month: \n");
    scanf("%d", &month);
    if(month < ONE){
        printf("Please enter valid month:\n");
        scanf("%d", &month);
    }
    if(month > TWELVE){
        printf("Please enter valid month:\n");
        scanf("%d",&month);
    }
    first.month = month;
    printf("size of month %d\n",sizeof(month));

    printf("Enter year: \n");
    scanf("%d", &year);
    if(year < ZERO){
        printf("Please enter valid year:\n");
        scanf("%d", &year);
    }
    if(year >YEAR){
        printf("Please enter valid year:\n");
        scanf("%d",&year);
    }
    first.year = year;
    printf("size of year %d\n",sizeof(year));
    printf("SIZE :%d\n",sizeof(day)+sizeof(month)+sizeof(year));
    return first;
}

void Print(struct date first){
    printf("DATE: %d/%d/%d.\n", first.day, first.month, first.year);
}

int main(){
    struct date first;
    first = valid(first);
    Print(first);
    return 0;
}
