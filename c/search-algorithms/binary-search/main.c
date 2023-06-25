#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool binarySearch(int array[100], int numberOfElements, int keyNumber);

bool binarySearch(int array[100], int numberOfElements, int keyNumber) {
  int low = 0;
  int high = numberOfElements;

  if (low < high){
    do{
      int halfIndex = low + (high - low) / 2;
      int halfValue = array[halfIndex];

      if (halfValue == keyNumber){
        return true;
      }
      else if (halfValue < keyNumber){
        low = halfIndex + 1;
      }

      else{
        high = halfIndex;
      }
    }while (low < high);
  };
  return false;
}


int main() {
  int numbers[100] = {1, 4, 7, 10, 30, 34, 65, 67, 73, 88, 93, 99, 203, 1023};
  int index = 14;
  int keyNumber = 93;

  bool numberValid = binarySearch(numbers, index, keyNumber);
  if (numberValid) {
    printf("The number %d exists on the array!", keyNumber);
  }
  else {
    printf("The nuimber %d does not exists on the array!", keyNumber);
  }
}

