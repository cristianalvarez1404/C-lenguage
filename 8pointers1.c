#include "coordinate.h"

void coodinate_update_x(coordinate_t coords, int new_x){
  coord.x = new_x;
}

coordinate_t coodinate_update_and_return_x(coordinate_t coord, int new_x){
  coord.x = new_x;
  return coord;
}
