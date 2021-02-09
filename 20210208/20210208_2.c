/*Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/
#include<stdio.h>
int main(){
   int disp[5][5]={0};
   int i, j;
   for(i=0; i<5; i++){
      for(j=0;j<5;j++){
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   printf("Two Dimensional array elements:\n");
   for(i=0; i<5; i++){
      for(j=0;j<5;j++){
          printf("disp [%d],[%d] :%d\n ",i,j disp[i][j]);
         }
      }
   return 0;
}
