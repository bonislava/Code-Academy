/*зад 10*/
#include <stdio.h>

int main()
{
    int Caravan = 3;
    int Camper = 3;
    double day_price;
    int rez;

    printf("Dobre doshli v Karavani Kemperi pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    scanf("%d", &rez);
    switch(rez){
        case 1:
            day_price =90.00;
            printf("Vie naehte karavana za: %2.f lv. na den\n",day_price);
            break;
        case 2:
            day_price =100.00;
            printf("Vie naehte kemper za : %2.f lv. na den\n",day_price);
            break;
        default:
            printf ("Molq izberete otnovo\n");
            scanf("%d", &rez);
            break;
    }
    return 0;
}