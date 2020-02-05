#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "alphabetical_printing.h"

void print_alphabetical_word_count(int *wordCount){
	int i;

/* prints out each letter of the alphabet and the count of integers that associate with it */
	for (i=0; i < ALPHABETS; i++){
		printf(" %c = %d ,",'A'+i, wordCount[i]);

	}
}
