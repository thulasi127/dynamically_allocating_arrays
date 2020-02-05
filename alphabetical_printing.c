#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "alphabetical_printing.h"

int main(){
  FILE *fp;
  int size;
  char ** array;
  int * wordCount;
  char *** alphabetical_array;

/* Opening the two text files in the main rather than having
  to open it in every individual function */

/* Read in a file called a1_words.txt */
  if ((fp = fopen("a1_words.txt", "r")) != NULL){
    size = file_size(fp);

/* Reading in each function */
    read_words(fp);
    array = read_words(fp);

/* Print out the words in the file in the original order */
    print_words(array);

    wordCount = alphabetical_word_count(array);

/* Print out the number of words that start with 'A', 'B', etc. */
    print_alphabetical_word_count(wordCount);

    alphabetical_array = create_alphabetical_array(array, wordCount);

/* Print out all the words that start with 'A', 'B', etc. */
    print_words_alphabetically(alphabetical_array, wordCount);

/* Freeing all malloc'd memory */
    free_alphabetical_array(alphabetical_array);

/* Closing file a1_words.txt */
    fclose(fp);

  }

/* Read in a file called a1_moreWords.txt */
  if ((fp = fopen("a1_moreWords.txt", "r")) != NULL){
    size = file_size(fp);

    read_words(fp);
    array = read_words(fp);

    print_words(array);

    wordCount = alphabetical_word_count(array);

    print_alphabetical_word_count(wordCount);

    alphabetical_array = create_alphabetical_array(array, wordCount);

    print_words_alphabetically(alphabetical_array, wordCount);
    free_alphabetical_array(alphabetical_array);

  /* CLosing file a1_moreWords.txt */
    fclose(fp);

  }
  return (0);

}
