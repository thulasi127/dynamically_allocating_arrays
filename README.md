# dynamically_allocating_arrays

PROGRAM DESCRIPTION
./alphabetical_printing

Using various functions, this program takes in a file of words
and prints out all the words iin that file that begin with each
letter of the alphabet.

HOW TO COMPILE
1. Make clean
2. Make
3. ./alphabetical_printing

FUNCTION DESCRIPTION

  file_size()
      This function computes the file size (in bytes) of an opened
      file.

  read_words()
      Takes in one argument, a File pointer, and then reads in words
      from that file into an array of words.

  print_words()
      Takes a NULL terminated array of words and prints out the words,
      one word per line, stopping when it reaches the NULL pointer.
      Function also handles the case of no words in the array.

  alphabetical_word_count()
      Takes in the array of words and counts how many words begin with
      the letter 'a' or 'A', and the same with the rest of the letters
      of the alphabet.

  print_alphabetical_word_count()
      Prints out the array of integers and the letters that each count
      is associated with.

  create_alphabetical_array()
      TAkes two parameters,a NULL terminated array of words, and the array
      of starting-letter word counts as returned by the alphabetical_word_count()
      function.

  free_alphabetical_array()
      Takes in a single parameter of the same type and design as alphabetical_array()
      and frees all of the memory in the array.

  print_words_alphabetically()
      Prints out all of the words of alphabetical_array() in an organized format.

MAIN FUNCTION DESCRIPTION

  alphabetical_printing()
      - reads in a file called a1_words.txt and a second file called a1_moreWords.text
      - prints out the words in the files in the original order
      - prints out the number of words that start with 'A', 'B', etc.
      - prints out all the words that start with 'A', 'B', etc.
      - Frees all malloc'd memory by the end of the program.
