/*Упражнение 13. Да се състави програма, която заделя памет за данни от тип: char, int, long, float, double,
инициализира по време на компилация съответните променливи съответно
в: a=‘a’, b=102, c=50000, d=6, e=-48.907. Програмата да извежда на екрана съдържанието на заделената за данни
памет, форматирано в съответствие с типа на отделните елементи данни*/
#include<stdio.h>

int main(){
    char *buffer[sizeof(char)+sizeof(int)+sizeof(long)+sizeof(float)+sizeof(double)];
    char* a = (char*)buffer;
    *a = 'a';
    printf("a : %c\n",*a);
    int* b = (int*)(buffer + sizeof(char));
    *b = 102;
    printf("b : %d\n",*b);
    long* c = (long*)(buffer + sizeof(char) + sizeof(int));
    *c =50000;
    printf("c : %ld\n",*c);
    float* d = (float*)(buffer + sizeof(char) + sizeof(int)+sizeof(long));
    *d =6;
    printf("d : %f\n",*d);
    double* e = (double*)(buffer + sizeof(char) + sizeof(int) + sizeof(long)+sizeof(float));
    *e = -48.907;
    printf("d : %lf",*e);

    return 0;
    
}