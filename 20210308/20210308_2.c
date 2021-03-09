/*Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.*/
#include <stdio.h>

int main(){
    FILE *pfile = NULL;
    char*filename = "20210308_2.txt";
    pfile = fopen (filename, "wt");
    if(pfile==NULL){
        printf("Failed to open %s.\n",filename);
    }
    fclose(pfile);
    if (rename("20210308_2.txt","20210308_2test.txt")){
        printf("Renamed successfully");
    }
    else{
        printf("Failed to rename");
    }
    remove("20210308_2.txt");
    return 0;
}

