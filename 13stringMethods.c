#include <stdio.h>
#include <string.h>

int main(){
  /*
  char src[] = "Hello";
  char dest[6];
  strcpy(dest,src); //copy strings

  char dest2[12] = "Hello";
  char src2[] = " World";
  strcat(dest2,src2); // cocantenate

  printf("%s",dest2);
  */

  // char str[] = "Hello";
  // size_t len = strlen(str); // length

  // printf("%d",strlen(str));

  // char str1[] = "Hello";
  // char str2[] = "world";
  // int result = strcmp(str1,str2);

  // printf("%d",result);


  // char src[] = "Hello";
  // char dest[6];
  // strncpy(dest, src, 3);
  // dest[3] = '\0';
  // printf("%s", dest);

  // char dest[12] = "Hello";
  // char src[] = " World";
  // strncat(dest, src, 3);

  // printf("%s", dest);

  // char str[] = "Hello";
  // char *pos = strchr(str, 'l');
  // printf("%s", pos);

  char str[] = "Hello World";
  char *pos = strstr(str, "World");

  printf("%s", pos);

  return 0;
}