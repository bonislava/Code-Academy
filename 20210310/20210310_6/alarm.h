#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <signal.h>
#include <setjmp.h>
#include <unistd.h>

int i = 0; int j = 0; long T0 = 0; 
jmp_buf Env;

void alarm_me(int d){
    long t1;
    t1 = time(0) - T0;
    printf("%d second%s has passed: j = %d. i =%d\n", t1,(t1 == 1) ? "" : "s", j, i);
    if (t1 >= 8) {
        printf("Giving up\n");
        longjmp(Env, 1);
    }
    alarm(1);
    signal(SIGALRM, alarm_me);
}