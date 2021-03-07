/*Задача 3. С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC.*/

#include <stdio.h>
#include <stdlib.h>

#define HUT 1950
#define PEAK 2918
#define ALTITUDE 100
#define TEMP_CHANGE 0.5

int main(){
    int choice;
    float *hut, *peak;
    float difference =(float)(PEAK-HUT);

    hut = (float*)malloc(sizeof(float));
    peak =(float*)malloc(sizeof(float));
    choice:
    printf("press 1 - to find the peak temp\n");
    printf("press 2 - to find the hut temp\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter temperature at the hut\n");
            scanf("%f",hut);
            *peak = *hut + difference / ALTITUDE * TEMP_CHANGE;
            printf("if temp of Vihren hut is %.2f C, then temp at a peak is %.2f C\n",*hut,*peak);

            break;
        case 2:
            printf("Enter temperature at the peak\n");
            scanf("%f",peak);
            *hut = *peak - difference / ALTITUDE* TEMP_CHANGE;
            printf("if temp of Vihren peak is %.2f C,then temp at the hut is %.2f C\n",*peak,*hut);

            break;
        default:
            printf("Invalid choice\n");
            goto choice;

            break;
    }
    
    free(hut);
    free(peak);

    return 0;
}

