/*Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.*/
#include <stdio.h>
#define DEBUG 15

#ifdef DEBUG
    #define DEBUGMSG printf("msg\n") 
#else
    #define DEBUGMSG printf(" ")
#endif

int main(){
    DEBUGMSG;
    return 0;
}