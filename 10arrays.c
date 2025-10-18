#include <stdio.h>

int main(){
  // int numbers[5] = {1, 2, 3, 4, 5};
  // int *numbers_ptr = numbers;

  // int value = numbers[2];
  // int *p = numbers + 3;
  // int value2 = *p;

  // printf("%d", value2);

  int numbers[5] = {1, 2, 3, 4, 5};
  int *ptr = numbers;
  ptr += 2;

  printf("%d", *ptr);

  return 0;
}