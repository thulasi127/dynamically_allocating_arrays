all: alphabetical_printing

alphabetical_printing: alphabetical_printing.o alphabetical_printing.h file_size.o read_words.o print_words.o alphabetical_word_count.o print_alphabetical_word_count.o create_alphabetical_array.o print_words_alphabetically.o free_alphabetical_array.o
	gcc -ansi -Wall -o alphabetical_printing alphabetical_printing.o read_words.o print_words.o file_size.o alphabetical_word_count.o print_alphabetical_word_count.o create_alphabetical_array.o print_words_alphabetically.o free_alphabetical_array.o

file_size.o: file_size.o
	gcc -ansi -Wall -c file_size.c

read_words.o: read_words.c
	gcc -ansi -Wall -c read_words.c

print_words.o: print_words.c
	gcc -ansi -Wall -c print_words.c

alphabetical_word_count.o: alphabetical_word_count.c
	gcc -ansi -Wall -c alphabetical_word_count.c

print_alphabetical_word_count.o: print_alphabetical_word_count.c
	gcc -ansi -Wall -c print_alphabetical_word_count.c

create_alphabetical_array.o: create_alphabetical_array.c
	gcc -ansi -Wall -c create_alphabetical_array.c

free_alphabetical_array.o: free_alphabetical_array.c
	gcc -ansi -Wall -c free_alphabetical_array.c 

print_words_alphabetically.o: print_words_alphabetically.c
	gcc -ansi -Wall -c print_words_alphabetically.c

clean:
	rm *.o alphabetical_printing
