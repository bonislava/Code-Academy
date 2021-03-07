#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*1-function to add two digits*/
int addDigit(int a,int b){

    return a + b;
}

/*2-function that returns the bit value of the corresponding index*/
int VzemiBitna(int number, int index){
    int c;
    c = 1 << index - 1;
    int res = number & c;
    res = res >> index - 1;

    return res;
}

/*3-function that makes the bits of the corresponding index zero*/
int iz4istiBitna(int number, int index){
    int mask = (1u << index);
    mask = ~mask;

    return (number&mask);
}

/*4-function that 'raises' the bits of the corresponding index in the number
 *('raises' mean to assign it an index 1)*/
int vdigniBitna(int number, int index) {
    int mask = (1u << index);

    return (number|mask);

}

/*5-function inverts a bit of the corresponding position in the number
 *(from 0 to 1 or from 1 to 0)*/
int obarniBitNa(int number, int index) {
    int mask = (1u << index);

    return (number ^ mask);
}

/*6-function that changes the bit value of a number to a specific position*/
int ChangeBit(int number ,int index){
    int mask = (1u << index);
    
    return number^mask;

}

/*7-function that resets all bits of numbers in an even position*/
int reset_bit_of_even_position(int number){
    int mask = 0x555;
    
    return number^mask;
}

/*8-function that finds the most significant bit that has a value of 1 in a given number*/
int OldBit(int number){
    int a = -1;
    while(number != 1){
        number = number >> 1;
        a ++;
    }
    return a;
}

/*9-function that removes all bits of a number after the n-th bit inclusive*/
int Del(int number,int index){
    int mask = ~mask;
    mask = mask << (index - 1);
    mask = ~mask;

    return (number & mask);
}

/*10-function that raises all bits of a number to positions divisible by 3*/
int Vdigni(int number){
    unsigned int mask =0x555;

    return (number | mask);
}

/*11-function that prints numbers from decimal to binary
 *2-nd version
 * void DecimalToBinary(){
    int a[10],x,i;
    printf("Enter a number to convert: ");
    scanf("%d",&x);
    for(i=0;x>0;i++)
    {
        a[i]=x%2;
        x=x/2;
    }
    printf("\nThe binary of given number is = ");
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
} */
void bin(unsigned n){ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

/*12-function that calculates the area of a circle on a given radius*/
double area_circle(double R,double pi){
    return (pi * R * R);
}

/*13-function that calculates the area of ellipse*/
double area_ellipse(double A,double B,double pi){
    return (pi * A * B);
}

/*14-function that inverts string*/
int get_rev(char s[]){
    char str[100];
    int cnt = 0;
    for(int i = strlen(s) - 1; i >= 0; i--){
        str[cnt] = s[i];
        cnt ++;
    }
    str[cnt-1] = '\0';
    printf("%s\n", str);
}

/*15-function that inverts string using loop with two arguments*/
int get_reversed(char s[]){
    int i;
    int j;
    for(i = 0,  j = (strlen(s) - 1); i < j; i++, j--){
        char z = s[j];
        s[j] = s[i];
        s[i] = z;
    }
    printf("%s\n", s);
}

/*16-function that checks whether a number is even or not*/
int EvenOrNot(){
    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("The number is even");
    }
    else{
        printf("the number is Odd");
    }
}

/*17-function that calculates area of a right triangle*/
float area_rightTr(float a,float b){
    return a * b / 2;
}

/*18-function that uses the area of a right triangle to calculate area of quadrilateral
 *with the same lengths of the sides*/
float SQ(float a,float b){
    return area_rightTr(a , b) * 2;
}

/*19-function that prints a string pointer to its beginning is given as an argument*/
void printstr(char *s){
    int i = 0;
    while(s[i] != '\0'){
        printf("%c",s[i]);
        i++;
    }
}

/*20-function atof that converts a string to a decimal point number*/
double atof(char *s){
    double Value, power;
    int i = 0;
    for(Value = 0.0; isdigit(s[i]); i++){
        Value = 10.0 * Value + (s[i] - '0');
    }
    if(s[i] == '.'){
        i++;
    }
    for(power = 1.0; isdigit(s[i]); i++){
        Value = 10.0 * Value +(s[i] - '0');
        power = power * 10;
    }
    return Value / power;
}

/*21-function that copies one sequence to another*/
void copy(char *to, char *from){
    int i = 0;
    while(from[i] != '\0'){
        to[i] = from[i];
        i++;
    }
}

/*22-Recursive function*/
int RecursiveFun(int nA, int nB) {
    int nValue = 1;
    if (nA > 1 && nB > 1){
        nValue += RecursiveFun(nA - 1, nB - 1);
    }

    return (nA + nB + nValue);
}

/*23-Multiplication from x to y*/
int Multiplication(int x,int y){
    int m = 1;
    while(x <= y){
        m = m * x;
        x ++;
    }
    return m;
}
/*24-Recursive multiplication*/
int Recursive_multiplication(int x){
    int m = 1;
    if(x > 1){
        return x*Recursive_multiplication(x-1);
    }
    return m;
}

/*25-function that returns the first position in string s1,
 *where one of the characters in s2 appears*/
int any(char s1[],char s2[]){
    int i, j;
    for(i = 0; i < strlen(s1); i++){
        for(j = 0; j > strlen(s2); j++){
            if(s1[i] == s2[j]){
                return i;
            }
        }
    }
    return -1;
}

/*26-function that converts uppercase letters to lowercase*/
void lower(char s[]){
    int i;
    for(i = 0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + ' ';
        }
        putchar(s[i]);
    }
}

/*27-function that reads a line in s[] and returns its length*/
int getline(char s[],int lim){
    int i;
    for(i = 0; s[i] != '\n'; i++){
        lim ++;
    }
    return lim;
}

/*28-function that receives as the first argument the beginning of an array
 *of integers, and as the second its length and prints all the elements
 *of the array one by one to its end*/
int printArr(int a[],int length){
    int i;
    for(i = 0; i < length; i++){
        printf("%d\n",a[i]);
    }
}

/*29-function that receives as the first argument the beginning of an array a,the second
 *argument is the length of the array, and the third arguments is the number to be searched.
 *The array is searched element by element and if the element maches the search number return
 *the position at which element is located.Otherwise return -1*/
int linSearch(int a[], int length, int d){
    int i;
    for(i = 0; i < length; i++){
        if(a[i] == d){
            return i;
        }
    }
    return -1;
}

/*30-function that receives as the first argument the beginning of an array a,the second
 *argument is the length of the array,and the third argument is the search number.Compare
 *the searched element with the element in the middle of the array.if its larger than the
 *one in the middle,look for the element from the middle to the end,if its smaller look for
 *it in the part from beginning to the middle.This is repeated until the array element becomes
 *equal to the searches.Then the number of the element in the array is returned or -1 if it isn't
 *contained in the array*/
int binarySearch(int a[],int n,int x){
    int m , l = 0;
    int h = n-1;
    while(l <= h){
        m = (l + h)/2;
        if(x < a[m]){
            l = m + 1;
        }
        else if(x > a[m]){
            l = m + 1;
        }
        else{
            return m;
        }
    }
    return -1;
}

/*31-function that swaps the values of two integers without using an auxiliary variable*/
void my_swap(int *a,int *b){
    *a = *a + *b; 
    *b = *a - *b; 
    *a = *a - *b;
}

/*32-function that prints a string*/
void printStr(char *s){
    char new;
    for(int i=0; s[i] !='\0'; i++){
        new = s[i];
        printf("\n%c",new);
    }

}
/*33-function that returns the length of a string*/
size_t my_strlen(char *s){
    size_t y = 0u;
    while(*s++ != '\0'){
        y++;
    }
    return y;
}

/*34-function that copies t to s*/
void our_strcpy( char *s, char *t){
    int i = 0;
    while((*s = *t) != '\0'){
        s++;
        t++;
    }
}

/*35-function that compares s and t and returns 0 if the two strings are equal*/
int our_strcmp(char *s, char *t){
    int i=0;
    for(;*s==*t;s++,t++){
        if(*s == '\0'){
            return 0;
        }
        return s[i] - t[i];
    }
}

/*36-function that adds the string t to the end of rhe sring s
 * (second version with pointers)
 * void our_strcat(char *s, char *t){
    while(*s != '\0')
        s++;
    while((*s++ = *t++));
}*/
void our_strcat(char *s, char *t){
    int i = 0, j = 0;
    while(s[i]!='\0')
        i++;
    while((s[i++] = t[j++]));
}

/*37-function that returns 1 if string t occurs at the end of the string s and 0
 *if this isn't satisfied*/
int strend(char s[],char t[]){
    char *x = s;
    char *y = t;
    while(*x){
        t = y;
        for(s = x; *s == *t; s++,t++){
            if(*s == '\0' && *t == '\0'){
                return 1;
            }
        }
        x ++;
    }
    return 0;
}

/*38-function that copies at most n characters from t to s*/
void my_strncpy(char *s, char *t, int n){
    while(n > 0){
        *s = *t;
        *s++, *t++, n--;
    }
}

/*39-function that adds n characters from the string t to the end of the string s*/
void my_strncat(char *s, char *t, int n){
    int i;
    for(i=0; s[i] != '\0'; i++){
    }
    for (int j = 0; j<n ;j++,i++){
        s[i] = t[j];
    }
    s[i] = '\0';
}

/*40-function that sum elements of an array*/
int sum_array(int *a, int n){
    int sum = 0;
    while (n != 0){
        sum += *a;
        a++;
        n--;
    }
    return sum;
}

/*41-sorting elements*/
void sort(int a[], int n){
    int *p, *q, temp;
    for ( p = a; p < a + n - 1; ++p ){
        for ( q = p + 1; q < a+n; ++q ){
            if ( *p > *q ){
                temp = *p;
                *p = *q;
                *q = temp;
            }
        }
    }
}

/*42-function that copies two strings in two empty strings*/
void copy_str(char *str1,char *str2,char *str3,char *str4){
    while(*str1 != 0){
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
    while(*str3 != '\0'){
        *str4 = *str3;
        str3++;
        str4++;
    }
    *str4 = '\0';
}