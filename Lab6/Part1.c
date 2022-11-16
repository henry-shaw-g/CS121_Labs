#include "Part1.h"

// sums all the integers in the file
int sum_integers_in_file(FILE* infile) {
	int sum = 0;
	while (!feof(infile)) {
		int num = 0;
		fscanf(infile, "%d", &num);
		sum += num;
	}

	return sum;
}

// determines if number is prime
int is_prime(int number) {
	for (int i = 2; i < number / 2; i++) {
		if (number % i == 0) {
			return 0;
		}
	}

	return 1;
}


