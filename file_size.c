#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "alphabetical_printing.h"

/* Given program that computes the file size (in bytes) of an opened file */
int file_size(FILE *fp){
  int sz = 0;
  fseek(fp, 0L, SEEK_END);
  sz = ftell(fp);
  rewind(fp);
  return sz;
}
