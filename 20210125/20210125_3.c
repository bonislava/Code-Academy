/*3.Напишете програма, която преброява шпациите, табулациите и
новите редове.*/
#include<stdio.h>

int main(){
    char c = 0;
    int counter = 0;
    int counter_1 = 0;
    int counter_2 = 0;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            counter ++;
        }
        else if(c == ' '){
            counter_1 ++;
        }
        else if(c == '\t')
            counter_2 ++;        
    }
    printf("Lines are: %d\n",counter);
    printf("Spaces are: %d\n",counter_1);
    printf("Tabs are: %d\n",counter_2);
    return 0;
}