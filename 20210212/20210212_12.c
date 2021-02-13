/*Задача 12.Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int number[100], age[100];
    char **name, **surname;
    char str[100];
    int choice = 1, i = 0;
    int j,temp,x;
    name = (char **)malloc(sizeof(char *));
    if(NULL == name){
        printf("Allocation memory error!\n");
        exit(1);
    }
    surname = (char **)malloc(sizeof(char *));
    if(NULL == surname){
        printf("Allocation memory error!\n");
        exit(2);
    }
    while(choice){
        printf("Enter the serial number: ");
        fflush(stdin);
        scanf("%d", &number[i]);
        printf("Enter the name: ");
        name[i] = (char *)malloc(14);
        if(NULL == name[i]){
            printf("Allocation memory error!\n");
            exit(3);
        }
        fflush(stdin);
        gets(name[i]);
        printf("Enter the surname: ");
        surname[i] = (char *)malloc(14);
        if(NULL == surname[i]){
            printf("Allocation memory error!\n");
            exit(4);
        }
        fflush(stdin);
        gets(surname[i]);
        printf("Enter the age:");
        fflush(stdin);
        scanf("%d", &age[i]);
        printf("Do you want to continue? Press 1 to continue or 0 to stop\n");
        fflush(stdin);
        scanf("%d", &choice);
        if(choice == 0){
             for(j = 0; j <= i; j++){
                for(x = j + 1; x <= i; x++){
                    if(strcmp(name[j], name[x]) >0){
                        strcpy(str, name[j]);
                        strcpy(name[j], name[x]);
                        strcpy(name[x], str);
                        strcpy(str, surname[j]);
                        strcpy(surname[j], surname[x]);
                        strcpy(surname[x], str);
                        temp = number[j];
                        number[j] = number[x];
                        number[x] = temp;
                        temp = age[j];
                        age[j] = age[x];
                        age[x] = temp;
                    }
                }
            }
            printf("Participants: \n");
            for(j = 0; j <= i; j++){
                printf("Number: %d\n", number[j]);
                printf("Name: %s\n", name[j]);
                printf("Surname: %s\n", surname[j]);
                printf("Age: %d\n", age[j]);
            }
        }
        i++;
    }
    free(name);
    free(surname);
    free(name[i]);
    free(surname[i]);
    return 0;
}