/*Задача 3: имаме две променливи int x = 10; и int y = 10;
създайте две променливи int true, false; На true присвоете
резултата от инкрементирането на ++х плюс оператор логическо
ИЛИ поставен между х и у . Принтирайте резултата*/

#include<stdio.h>

int main(){
    int x = 10;
    int y = 10;
    int true;
    int false;
    true = ++x + x||y;
    printf("true = %d\n",true);
    
    return 0;
}