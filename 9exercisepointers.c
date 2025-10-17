#include <stdio.h>

typedef struct Coords {
  int x;
  int y;
  int z;
} coordinate_t;


int main(){

  int meaning_of_life = 100;
  int *pointer_to_mol = &meaning_of_life;
  int value_at_pointer = *pointer_to_mol;

  printf("%p\n", &meaning_of_life);
  printf("%p\n", pointer_to_mol);
  printf("%d\n", value_at_pointer);

  // First method
  coordinate_t point = {10, 20, 30};
  coordinate_t *ptrToPoint = &point;
  printf("X: %d\n", ptrToPoint -> x);

  // Second method
  coordinate_t point = {10, 20, 30};
  coordinate_t *ptrToPoint = &point;
  printf("X: %d\n", (*ptrToPoint).x); // More verbose


  return 0;
}