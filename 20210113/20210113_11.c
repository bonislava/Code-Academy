/*зад 11*/
#include <stdio.h>

int main(){
    float fTomato_price = 4.50;
    float fFlour_price = 1.80;
    float fCandy_price = 1.50;
    float fYogurt_price = 0.50;
    float fLollipop_price = 0.15;
    float fIceCream_price = 0.60;
    float fTomatoWeight;
    float fFlourWeight;
    float fCandynumber;
    float fYogurtnumber;
    float fLollipopnumber;
    float fIceCreamnumber;

    printf("Hello, welcome to our store!");
    printf("Today we offer - fresh tomatoes,flour, yogurt, ice cream cones and lollipops\n");

    printf("How many kilograms of tomatoes will you want?");
    scanf("%f",&fTomatoWeight);
    float fTomatoTotal = fTomatoWeight*fTomato_price;
    printf("%.2f\n",fTomatoTotal);

    printf("\nHow many kilograms of flour will you want?");
    scanf("%f",&fFlourWeight);
    float fFlourTotal = fFlourWeight*fFlour_price;
    printf("%.2f\n",fFlourTotal);

    printf("How much candies will you want?");
    scanf("%f",&fCandynumber);
    float fCandyTotal = fCandynumber*fCandy_price;
    printf("%.2f\n",fCandyTotal);

    printf("How much Yogurts will you want?");
    scanf("%f",&fYogurtnumber);
    float fYogurtTotal = fYogurtnumber*fYogurt_price;
    printf("%.2f\n",fYogurtTotal);
    
    printf("How much lolipops will you want?");
    scanf("%f",&fLollipopnumber);
    float fLollipopTotal = fLollipopnumber*fLollipop_price;
    printf("%.2f\n",fLollipopTotal);

    printf ("How much IceCream will you want?");
    scanf("%f",&fIceCreamnumber);
    float fIceCreamTotal = fIceCreamnumber*fIceCream_price;
    printf("%.2f\n",fIceCreamTotal);

    float Total = (fTomatoTotal + fFlourTotal + fCandyTotal + fYogurtTotal + fLollipopTotal + fIceCreamTotal);
    printf("Total is : %.2f",Total);
    
    return 0;

}