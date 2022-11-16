#include "part3.h" 

int read_words(FILE* infile, int words[MAX_WORDS][MAX_CHAR], int word_lengths[]){
	int line = 0;
	char temp_char = 'a';
	int index = 0;

	while (!feof(infile)) {
		fscanf(infile, "%c", &temp_char);
		words[line][index] = temp_char;
		if (temp_char == '\n'){
			line++;
			index = 0;
		}else{
			word_lengths[line]++;
			index++;
		}
	}
	return line;
}

char get_guess()
{
	char guess = '\0';

	printf("Enter your guess:\n");
	scanf("%c", guess);

	return guess;
}

#if 1
int guessed_letters(char guesses[], int size)
{
	char guess = '\0';
	int index = 0;

	guess = get_guess();

	int guess_count = 0;

	index = guess - 96;

	if (guesses[index] = 1)
	{
		do
		{
			guess = get_guess();

			guess_count += 1;

			index = guess - 96;

		} while (guesses[index] == 1);

				guesses[index] = 1;
	
	}
	return guess_count;
}

	
#endif
void apply_guess(char* word, int* known_word, int word_length, char guessed_char) {
	int index = 0;
	for (; index < word_length; index++) {
		if (word[index] == guessed_char) {
			known_word[index] = 1;
		}
	}
}

int did_win(int* known_word, int word_length) {
	int index = 0, won = 1;
	for (; index < word_length && won; index++) {
		won = known_word[index];
	}

	return won;
}

void print_known_word(char* word, int* known_word, int word_length) {
	int index = 0;
	for (; index < word_length; index++) {
		if (known_word[index]) {
			printf("%c", word[index]);
		}
	}
}