#include "Sentences.h"


int random_num(int num_words)
{
	int index = 0;
	index = rand() % num_words;
	return index;
}

void get_word(char* words[], int num_words, char* destination) {
	int index = random_num(num_words);
	char* word = words[index];
	strcpy(destination, word);
}

void build_sentence(char* artical[],char* noun[], char* verb[], char* preposition[]) {
	char word[100];

	// get article, capitalize it and print it
	get_word(artical, 4, word);
	capitalize_first_letter(word);
	printf("%s ", word);

	// get noun, print it
	get_word(noun, 5, word);
	printf("%s ", word);

	// get verb, print it
	get_word(verb, 6, word);
	printf("%s ", word);

	// get preposition, print it
	get_word(preposition, 5, word);
	printf("%s!\n", word); // < print ! too
}

void capitalize_first_letter(char input[]){
	input[0] = input[0] - 'a' + 'A';
}