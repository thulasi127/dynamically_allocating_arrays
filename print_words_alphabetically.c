#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "alphabetical_printing.h"

void print_words_alphabetically(char ***alphabetical_array, int *wordCount){
	int i = 0;
	int j = 0;
	int letter_count = -1;

	for (i=0; i < ALPHABETS; i++){
		letter_count++;
		printf("\n'%c'\n", 65+i);
		if (wordCount[i] == '\0'){
			printf("There are no words that begin with the letter '%c'\n",letter_count+65);
		}
		else {
		
			for (j=0; j < wordCount[i]; j++){
				printf("%s \n", alphabetical_array[i][j]);
			}
		}

	}
	printf("\n");
}
