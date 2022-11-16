#include "GreatestCommonDivisor.h"

int read_int(int* exit);

int main(void)
{
	int num1 = 0, num2= 0;

	while (1) {
		num1 = ask_for_num();
		num2 = ask_for_num();

		int gcd = greatest_common_divisor(num1, num2);

		display_gcd(gcd);
	}

	printf("Program finished :)\n");
	return 0;
}

int get_digit(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}

	return -1;
}

int read_int(int* exit) {
	char c = '\0';
	int i = 0;
	int n = 0;

	c = getchar(c);
	i = get_digit(c);
		
	while (i != -1) {
		n = n * 10 + i;

		c = getchar(c);
		i = get_digit(c);
	}

	if (c == 'q' || c == EOF) {
		*exit = 1;
	}
	else {
		*exit = 0;
	}

	return n;
}