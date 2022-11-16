#include "Part3.h" 

int get_term_input() {
	int input = 0;
	do
	{
		printf("Enter: ");
		scanf("%d", &input);

	} while (input < 1);

	return input;
}

int calculate_fib_term(int n)
{
	int num1 = 0, num2 = 1, temp = 0;
	
	if(n == 1)
	{
		return num1;

	}

	for (int i = 3; i <= n; i++)
	{
		temp = num1 + num2; 
		num1 = num2;
		num2 = temp;

	}

	return num2;


}