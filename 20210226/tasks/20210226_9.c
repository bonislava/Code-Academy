#include<stdio.h>
int main() {
    int iValue = 47;
    int iDiv = 3;
    double dfRes = 0.0;
    dfRes = (double) iValue / iDiv;
    printf("Value of dfResof: %lf, V/D: %lf\n",dfRes, iValue/iDiv);
    
    short int s = 13; /* 2 bytes */
    int* p = (int*) &s;
    *p = 31; /* crash - write 4 bytes */
    printf("%d, %ld", s, *p);
    char ch = 'x'; /* a byte */
    double* pd = (double*) &ch;
    *pd = 0.0; /* crash - write 8 bytes */
    printf("%c, %f", ch, *pd);

    return 0;
}
