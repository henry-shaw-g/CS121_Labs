
#include "Part2.h"

int main2(){

	while (1) {
		int input_number = 0;
		input_number = get_factorial_input();

		int factorial = 0;
		factorial = compute_factorial(input_number);

		printf("Factorial of %d: %d\n", input_number, factorial);
	}

	return 0;
}