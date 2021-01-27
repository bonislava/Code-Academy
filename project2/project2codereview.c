/*  Направете функция, която получава като параметър число. 
Неговите битове ще третираме по следния начин - 
първите 5 бита (най-младшите) представляват едно число(5 bit-ово), 
следващите 5 - друго число и тн. 
Изведете на стандартния изход числата, "закодирани" в оригиналното число.*/

#include <stdio.h>
#include <stdlib.h>

void decode_numbers(unsigned int num); /*function decode*/

int main(){
    decode_numbers(0xFFFFFFFF); // number to decode
    return 0;
}

void decode_numbers(unsigned int num){
    unsigned int mask = 0b11111; /*binary mask*/

    for(int i = 0; i <= sizeof(int) * 8; i+=5){ /*size of int 4(Bytes) multiply with 8 to give us 32(bits)*/
        unsigned int five_bit =  (num >> i) & mask; /*shift num with 'i' and bitwise 'AND' with mask */

        printf("number(%d-%d) = %d \n", i, i+5, five_bit); 
    }
    /*the last one 'i' is for (30-35) which include 2bits and 
    *the largest number which can be in it is (2^2)-1=3 */
}