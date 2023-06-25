#include <stdio.h>
void bubbleSort(int *array, int size); 

int main() {
  int numbers[100] = {123, 1, 34, 4,  234, 7, 650, 10, 30, 3434, 4000, 34, 2, 65, 54, 67, 73, 88, 3, 93, 99, 203, 1023};
  
  bubbleSort(numbers, 23);

  for (int i = 0; i < 23; i++){
    printf("%d ", numbers[i]);
  }
}

void bubbleSort(int *array, int size){
  int i, j, temp;
  for (i = 0; i < size; i++){
    for (j = 0; j < size - 1 - i; j++){
      if (array[j] > array[j + 1]){
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}