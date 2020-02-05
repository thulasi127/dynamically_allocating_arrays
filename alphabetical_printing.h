#define MAX_LENGTH_WORDS 50
#define ALPHABETS 26

int file_size(FILE *fp);
char ** read_words(FILE *fp);
void print_words(char **array);
int * alphabetical_word_count(char **array);
void print_alphabetical_word_count(int *wordCount);
char *** create_alphabetical_array(char **array, int *wordCount);
void free_alphabetical_array(char ***alphabetical_array);
void print_words_alphabetically(char ***alphabetical_array, int *wordCount);
