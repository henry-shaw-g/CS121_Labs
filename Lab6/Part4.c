#include "Part4.h"


int pick_num(){
	return rand() % 201 - 100;
}

// asks user to choose number between -100 and 100
int get_guess() {
	int guess = 0;
	int invalid = 1;

	do {
		printf("Enter a number between -100, 100: ");
		scanf("%d", &guess);
		invalid = guess < -100 | guess > 100;
		
		if (invalid) {
			printf(">:C\n");
		}
	} while (invalid);

	return guess;
}

void is_correct_guess(int num,int guess)
{

if(guess > num)
{
	printf("Guess is too high\n");
}

if(guess < num)
{
	printf("Guess is too low\n");
}

}

void display_win(int guess_count) {
	printf("You won in %d guesses.\n", guess_count);
}