/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/
#include <stdio.h>

char days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeapYear(int year){
    if (year % 400 == 0){
       return 1;
    } else if (year % 100 == 0){
       return 0;
    } else if (year % 4 == 0){
       return 1;
    } 
    return 0;
}
int func(int day, int month, int year){
    int i, res = day;
    for( i = 0; i < month - 1; i++)
        res += days[i];
    if (isLeapYear(year) && (day != 29))
        res += 1;    
    return res;
}
int main(){
    int day,month,year;
    printf("Enter day:\n");
    scanf("%d",&day);
    printf("Enter month:\n");
    scanf("%d",&month);
    printf("Enter year\n");
    scanf("%d",&year);
    printf(" %d.%d.%d: is  %d of the year\n", day, month, year, func(day, month, year));
    return 0;
}
