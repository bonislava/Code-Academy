/*Задача 18 Довършете задачата за кемперите от миналия път като добавите
променлива, в която да се събират парите, които клиента дължи на компанията.
Принтирайте резултата. Питайте клиента дали иска още налични продукти.*/

#include <stdio.h>

int main()
{
    int Caravan = 3;
    int Camper = 3;
    double day_price;
    double total;
    int rez;

    printf("Dobre doshli v Karavani Kemperi pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    scanf("%d", &rez);
    switch(rez){
        case 1:
            day_price = 90.00;
            printf("Vie naehte karavana za: %2.f lv. na den\n",day_price);
            break;
        case 2:
            day_price = 100.00;
            printf("Vie naehte kemper za : %2.f lv. na den\n",day_price);
            break;
        default:
            printf ("Molq izberete otnovo\n");
            scanf("%d", &rez);
            break;
    } 
    printf("Obshta dyljimost : %2.f lv.\n",day_price);
    int x;
    printf("zelaete li da naemete otnovo : \n");
    printf("Ako zelaete natisnete 1\n");
    printf("Ako ne zelaete natisnete 2\n");
    scanf("%d", &x);
    if (x==1){
        int y;
         printf("Za karavana natisnete 1\n");
         printf("Za kemper natisnete 2\n");
         scanf("%d",&y);
         if (x==1){
             total = 90.00 + day_price;
             printf("Obshta dyljimost : %2.f lv.\n",total);  
         }
         else {
             printf("%2f lv.\n",day_price);
             total = 100.00 + day_price;
             printf("Obshta dyljimost : %2.f lv\n",total);
         }  
    }
    else {
        printf("Blagodarim vi, zapovqdaite otnovo");
    }
    return 0;
}