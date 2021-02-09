/*6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */
#include <stdio.h>
 
int main(){
  int arr[100], *max, size, i;
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
  printf("Enter %d integers\n", size);
 
  for (i = 0 ; i< size ; i++ ){
    scanf("%d", &arr[i]);
  }
  max = arr;
  *max = *arr;
  for (i = 1; i < size; i++){
    if (*(arr+i) > *max){
       *max = *(arr+i);
    }
  }
  printf("Max element is %d.\n", *max);
  return 0;
}
