/*Задача 20.Движението по дълга улица на “Експрес Такси” е организирано, така че
има спирка на всеки километър. “Експрес Такси” се движи по улицата от всяка спирка
1,2,3... или 10 километра без спиране. За всеки от десетте разстояния цените са
дадени в таблица, например:
1 12
2 21
3 31
4 40
5 49
6 58
7 69
8 79
9 90
10 101
Пътник иска да пътува n (1<=n<=100) километра. Какви разстояния на пътуване трябва
да избере, така че пътуването да му излезе най-евтино, и каква е цената на цялото
пътуване? Напишете програма, която да реши проблема.
Входни данни: В първия ред от входния файл INPUT3.TXT са записани 10 цели числа,
които са цените за пътуване, съответно на 1,2,3... ,10 километра, а във втория ред е
записано само числото n.
Изходни данни: Всеки ред без последния от изходния файл OUTPUT3.TXT трябва да
съдържа две числа - дължината на маршрута и цената на билета. Цената на цялото
пътуване трябва да се запише на последния ред от изходния файл.
Примерен вход
INPUT3.TXT
12 21 31 40 49 58 69 79 90 101
15
Примерен изход
OUTPUT3.TXT
3 31
6 58
6 58
147 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SUM 1000
#define SIZE_TEXT 50
#define SIZE 11
#define KILOMETERS 15

int sum = SUM;
char text[SIZE_TEXT];
int arr1[SIZE]; 

int find(int arr[], int index, int num, int r_num);
void Combinate(int n);
 
int main(){
    int n = KILOMETERS;
    FILE *fp = NULL;
    fp = fopen("INPUT3.txt", "r");
    if(fp ==NULL){
        perror("Error opening file!");
        exit(1);
    }
    for(int i =0; i<SIZE; i++){
        fscanf(fp, "%d ", &arr1[i]);
    }
    Combinate(n);
    FILE *fp2 = NULL;
    fp2 = fopen("OUTPUT3.txt", "w");
    if(fp2 == NULL){
        perror("Error opening file!");
        exit(2);
    }
    fprintf(fp2,text);
    fprintf(fp2,"%d",sum);
    printf("%s",text);
    printf("%d",sum);

    fclose(fp2);
    return 0;
}
int find(int arr[], int index, int num, int r_num){
    int s = 0;
    char t[SIZE_TEXT];
    if(r_num < 0){
        return 0;
    } 
    if (r_num == 0){
        for (int i = 0; i < index; i++){
            s += arr1[arr[i]];
        }
        if(s < sum){
            sum = s;
            memset(text,0,strlen(text));
            for(int i = 0; i < index; i++){
                sprintf(t,"\n%d %d",arr[i], arr1[arr[i]]);
                strcat(text, t);
            }
            strcat(text, "\n");
        }
        return 0;
    }
    int prev = (index == 0)? 1 : arr[index-1];
    for (int k = prev; k <= num ; k++){
        arr[index] = k;
        find(arr, index + 1, num, r_num - k);
    }
}
void Combinate(int n){
    int arr[n]; 
    find(arr,0,SIZE-1,n);
}
