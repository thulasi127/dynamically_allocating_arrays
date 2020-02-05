#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "alphabetical_printing.h"

void print_words(char **array) {
  int i = 0;

  while(array[i] != NULL){
    printf("%s\n", array[i]);
    i++;
  }
}
