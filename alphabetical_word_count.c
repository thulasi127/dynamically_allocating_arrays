#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"alphabetical_printing.h"

int * alphabetical_word_count(char **array) {
  int upper = 65; /* ASCII for 'A' (upper case) */
  int lower = 97; /* ASCII for 'a' (lower case) */
  int j = 0;
  int i = 0;

/* Creates and stores a 26 letter long alphabetical count as an integer array */
  int * wordCount = malloc(sizeof(int * ) * (ALPHABETS + 1));

/* counter j will reiterate through every letter of the alphabet */
  for (j = 0; j < (ALPHABETS+1); j++) {

/* counter i goes through every word in the text file (the word array) */
    for (i = 0; array[i] != NULL; i++) {
      if ((array[i][0] == upper) || (array[i][0] == lower)) {
/* Stored into an array */
        wordCount[j]++;
      }
    }
    /* Will move onto the next letter of the alphabet (upper case and lower case) */
    upper++;
    lower++;
  }

/* returns the array */
  return (wordCount);
}
