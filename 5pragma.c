#include <stdio.h>

#pragma once

int main(){

  for(int i = 0; i < 10; i++){
    printf("%d",i);
  }
  printf("\n");

  int num = 10;

  while(num > 0){
    printf("%d\t", num);
    num--;
  }

  return 0;
}