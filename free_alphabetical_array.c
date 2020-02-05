#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "alphabetical_printing.h"

void free_alphabetical_array(char ***alphabetical_array){
	int i = 0;
	int j = 0;
	int *max_length;

	/* The purpose of this function is to clear/free the first dimension of the array, second dimension of the array
	 and the entire alphabetical array from the inside out */

	for (i=0; i < (ALPHABETS+1); i++){
		max_length = alphabetical_word_count(alphabetical_array[i]);


		for (j=0; j < max_length[i]; j++){
			alphabetical_array[i][j] = NULL;
			free(alphabetical_array[i][j]);


		}
		alphabetical_array[i] = NULL;
		free(alphabetical_array[i]);
	}
	free(alphabetical_array);
	alphabetical_array = NULL;
}
