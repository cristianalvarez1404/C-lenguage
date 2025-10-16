#include <stdio.h>

int distance(int x_1, int y_1, int z_1, int x_2, int y_2, int z_2 );

int main(){

  int x_1 = 1;
  int y_1 = 2;
  int z_1 = 3;
  int x_2 = 4;
  int y_2 = 5;
  int z_2 = 6;

  int dist = distance(x_1,y_1,z_1,x_2,y_2,z_2);
  printf("Distance: %d", dist);

  struct City {
    char *name;
    int lat;
    int lon;
  };

  struct City c = {"San Francisco", 37, -122};
  struct City c2 = {
    .name = "San Francisco",
    .lat = 37,
    .lon = -122
  };

  struct Coordinate new_coord(int x, int y, int z){
    struct Coordinate coord = {
      .x = x,
      .y = y,
      .z = z
    };
    return coord;
  }

  struct Coordinate scale_coordiante(struct Coordinate coord, int factor){
    struct Coordinate scaled = {
      .x = coord.x * factor,
      .y = coord.y * factor,
      .z = coord.z * factor,
    };

    return scaled;
  }

  return 0;
}

int distance(int x_1, int y_1, int z_1, int x_2, int y_2, int z_2 ){
  return x_1 + y_1;
}