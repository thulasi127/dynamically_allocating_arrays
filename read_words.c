#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "alphabetical_printing.h"

#define MAX_LENGTH_WORDS 50

int file_size(FILE *fp);

char **read_words(FILE *fp){
  char **array;
  int size = 0;
  int i = 0;
  int j = 0;


  size = file_size(fp);
  array = malloc(sizeof(char *) * size);

  for (i=0; i < size; i++){
    array[i] = malloc(sizeof(char) * MAX_LENGTH_WORDS);
  }

  while(fscanf(fp, "%s", array[j]) != EOF){
    j++;
  }

  array[j+1] = NULL;

  return array;
}
