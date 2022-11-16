#include "part3.h"



int main(void) {
	srand((unsigned int) time(NULL));
	FILE* infile = fopen("words.txt","r"); 
	char words[MAX_WORDS][MAX_CHAR] = { {0} };
	int word_lengths[MAX_WORDS] = {0};

	//test *********
	read_words(infile, words, word_lengths);	
	for (int i = 0; i<=MAX_WORDS; i++){
		for (int j = 0; j<word_lengths[i]; j++){
			printf("%c", words[i][j]);
		}
		printf("\n");
	}
	//*************************

	char guesses[26] = { 0 };
	char* word; // pointer to word to guess

	fclose(infile);
	return 0;
}