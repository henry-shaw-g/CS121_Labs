#include "Part3.h" 

int main3(void)
	{

	int input = 0;
	input = get_term_input();

	input = calculate_fib_term(input);

	printf("%d", input);

	return 0;
}