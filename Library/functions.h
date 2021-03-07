/*1-function to add two digits*/
int addDigit(int a,int b);
/*2-function that returns the bit value of the corresponding index*/
int VzemiBitna(int number, int index);
/*3-function that makes the bits of the corresponding index zero*/
int iz4istiBitna(int number, int index);
/*4-function that 'raises' the bits of the corresponding index in the number
 *('raises' mean to assign it an index 1)*/
int vdigniBitna(int number, int index);
/*5-function inverts a bit of the corresponding position in the number
 *(from 0 to 1 or from 1 to 0)*/
int obarniBitNa(int number, int index);
/*6-function that changes the bit value of a number to a specific position*/
int ChangeBit(int number ,int index);
/*7-function that resets all bits of numbers in an even position*/
int reset_bit_of_even_position(int number);
/*8-function that finds the most significant bit that has a value of 1 in a given number*/
int OldBit(int number);
/*9-function that removes all bits of a number after the n-th bit inclusive*/
int Del(int number,int index);
/*10-function that raises all bits of a number to positions divisible by 3*/
int Vdigni(int number);
/*11-function that prints numbers from decimal to binary*/
void bin(unsigned n);
/*12-function that calculates the area of a circle on a given radius*/
double area_circle(double R,double pi);
/*13-function that calculates the area of ellipse*/
double area_ellipse(double A,double B,double pi);
/*14-function that inverts string*/
int get_rev(char s[]);
/*15-function that inverts string using loop with two arguments*/
int get_reversed(char s[]);
/*16-function that checks whether a number is even or not*/
int EvenOrNot();
/*17-function that calculates area of a right triangle*/
float area_rightTr(float a,float b);
/*18-function that uses the area of a right triangle to calculate area of quadrilateral
 *with the same lengths of the sides*/
float SQ(float a,float b);
/*19-function that prints a string pointer to its beginning is given as an argument*/
void printstr(char *s);
/*20-function atof that converts a string to a decimal point number*/
double atof(char *s);
/*21-function that copies one sequence to another*/
void copy(char *to, char *from);
/*23-Multiplication from x to y*/
int Multiplication(int x,int y);
/*24-Recursive multiplication*/
int Recursive_multiplication(int x);
/*25-function that returns the first position in string s1,
 *where one of the characters in s2 appears*/
int any(char s1[],char s2[]);
/*26-function that converts uppercase letters to lowercase*/
void lower(char s[]);
/*27-function that reads a line in s[] and returns its length*/
int getline(char s[],int lim);
/*28-function that receives as the first argument the beginning of an array
 *of integers, and as the second its length and prints all the elements
 *of the array one by one to its end*/
int printArr(int a[],int length);
/*29-function that receives as the first argument the beginning of an array a,the second
 *argument is the length of the array, and the third arguments is the number to be searched.
 *The array is searched element by element and if the element maches the search number return
 *the position at which element is located.Otherwise return -1*/
int linSearch(int a[], int length, int d);
/*30-function that receives as the first argument the beginning of an array a,the second
 *argument is the length of the array,and the third argument is the search number.Compare
 *the searched element with the element in the middle of the array.if its larger than the
 *one in the middle,look for the element from the middle to the end,if its smaller look for
 *it in the part from beginning to the middle.This is repeated until the array element becomes
 *equal to the searches.Then the number of the element in the array is returned or -1 if it isn't
 *contained in the array*/
int binarySearch(int a[],int n,int x);
/*31-function that swaps the values of two integers without using an auxiliary variable*/
void my_swap(int *a,int *b);
/*32-function that prints a string*/
void printStr(char *s);
/*33-function that returns the length of a string*/
//size_t my_strlen(char *s);
/*34-function that copies t to s*/
void our_strcpy( char *s, char *t);
/*35-function that compares s and t and returns 0 if the two strings are equal*/
int our_strcmp(char *s, char *t);
/*36-function that adds the string t to the end of rhe sring s*/
void our_strcat(char *s, char *t);
/*37-function that returns 1 if string t occurs at the end of the string s and 0
 *if this isn't satisfied*/
int strend(char s[],char t[]);
/*38-function that copies at most n characters from t to s*/
void my_strncpy(char *s, char *t, int n);
/*39-function that adds n characters from the string t to the end of the string s*/
void my_strncat(char *s, char *t, int n);
/*40-function that sum elements of an array*/
int sum_array(int *a, int n);
/*41-sorting elements*/
void sort(int a[], int n);
/*42-function that copies two strings in two empty strings*/
void copy_str(char *str1,char *str2,char *str3,char *str4);