/*9. Дефинирайте променливи със стойност
4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438
583 853.39875937284928422.
Изведете всяка променлива на екрана със printf()*/
#include<stdio.h>

int main(){
    float fValue = 4.9876543;
    printf("%f\n",fValue);
    long double lValue = 7.123456789012345678890;
    printf("%Lf\n",lValue);
    float f_Value = 18398458438583853.28;
    printf("%LG\n",f_Value);
    long double l_Value = 18398458438583853.39875937284928422;
    printf("%LG\n",l_Value);
    
    return 0;
}