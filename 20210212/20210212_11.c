/*Задача 11.Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int number[100], age[100];
    char **name, **surname;
    int choice = 1, i = 0;
    int j;
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