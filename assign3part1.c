#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/****************
 * program should only take
 * the name of the file to read
 ****************/
int main(int nargs, char *args[]){
  if(nargs!=2){
    printf("not enough vars, goodbye~!\n");
    exit(1);
  }
  unsigned long log_addr;
  FILE file = args[1];
}

/****************
 * this should include other file operations
 ****************/

