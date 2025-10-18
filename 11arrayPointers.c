#include <stdio.h>

typedef struct Coordinate {
  int x;
  int y;
  int z;
} coordinate_t;


int main(){

  coordinate_t points[3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  printf("points[1].x = %d, points[1].y = %d, points[1].z = %d\n",
    points[1].x,
    points[1].y,
    points[1].z
  );

  coordinate_t *ptr = points;
  printf("points[1].x = %d, points[1].y = %d, points[1].z = %d\n",
    (points + 1) -> x,
    (points + 1) -> y,
    (points + 1) -> z
  );

  int *pointers_start = (int *)points;

  for(int i = 0; i < 3 ; i ++){
    printf("%d", pointers_start[i]);
  }


  return 0;
}