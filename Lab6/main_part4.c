#include "part4.h"

int main(void) {
	srand((int)time(NULL));

	int num = 0, guess = 0, amount_of_guesses = 0;

	num = pick_num();

	do {

		guess = get_guess();

		is_correct_guess(num, guess);

		amount_of_guesses++;
	} while (num != guess);

	display_win(amount_of_guesses);

	return 0;
}