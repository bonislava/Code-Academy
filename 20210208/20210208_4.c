/*Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.*/
#include <stdio.h>

int main(){
    int i,n;
    float num[100], sum=0.0, avg;
    printf("Enter the numbers of elements:");
    scanf("%d",&n);
    while(n>100 || n<1){
        printf("Error! number should be in range of 1 to 100\n");
        printf("Enter the number of elements again:");
        scanf("%d",&n);
    }
    for(i=0; i<n; ++i){
        printf("%d. Enter number:" ,i+1);
        scanf("%f",&num[i]);
        sum += num[i];
    }
    avg = sum / n;
    printf("Average = %lf",avg);
    return 0;
}
