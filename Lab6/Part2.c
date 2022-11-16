#include "Part2.h"

// prompts the user to input a number (integer >= 0)
int get_factorial_input()
{

	int n = 0;

		do
		{
		printf("Enter an integer: ");
		scanf("%d", &n);

		}while(n <= 0);

	return n;
}

// calculates the factorial of a number (integer >= 0)
int compute_factorial(int number){
	int product = 1;
	for (int i = 1;i <= number;i++){
	product *= i;
	}
	return product;
}