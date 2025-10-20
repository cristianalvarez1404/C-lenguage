#include <stdio.h>

typedef enum DaysOfWeek {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
} days_of_week_t;

typedef enum Colors{
  RED = 55,
  GREEN = 176,
  BLUE = 38
} color_t;

typedef enum {
  EXIT_SUCCESS = 0,
  EXIT_FAILURE = 1,
  EXIT_COMMAND_NOT_FOUND = 127
} ExitStatus;

int main(){
  days_of_week_t day = TUESDAY;
  color_t color = BLUE;
  ExitStatus status = EXIT_COMMAND_NOT_FOUND;

  printf("%d\n", day);
  printf("%d\n", color);
  printf("%d", status);
  return 0;
}