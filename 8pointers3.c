#include <stdio.h>

int main(){
  int age = 37;
  int *pointer_to_age = &age;

  printf("The address of age is: %p\n", &pointer_to_age);
  return 0;
}