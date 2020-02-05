#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "alphabetical_printing.h"

char *** create_alphabetical_array(char **array, int *wordCount){
  char *** alphabetical_array;
  int max_length;
  int arrayCount[ALPHABETS+1];
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;

  for (i=0; i < ALPHABETS; i++){
    arrayCount[i] = wordCount[i];
  }

/* Finds the maximum number of words in an array */
  for(i=0; i < ALPHABETS; i++){
    if (arrayCount[0] < arrayCount[i]){
      arrayCount[0] = arrayCount[i];
    }
  }

 /* Malloc every letter in the words using the highest number of words in the array */
  max_length = arrayCount[0];
  alphabetical_array = malloc(sizeof(char * ) * (ALPHABETS+1));

  for (i=0; i < (ALPHABETS+1); i++){
    alphabetical_array[i] = malloc(sizeof(char *) * max_length);

    for (j=0; j < max_length; j++){
      alphabetical_array[i][j] = malloc(sizeof(char * ) * 45);
    }
  }

  while (1==1){
    if (array[k] == NULL){
      break;
    }
    k++;
  }


  /* Counting every word in the file */
  for (i=0; i < ALPHABETS; i++){
    j = 0;
    for (l=0; l < k; l++){
      if ((array[l][0] == 65+i) || (array[l][0] == 97+i)){
        strcpy(alphabetical_array[i][j], array[l]);
        j++;
      }
    }
  }


return(alphabetical_array);
}
