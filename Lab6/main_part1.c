
#include "Part1.h"

void test_is_prime();

int main_part1(void)
{

	FILE* infile = fopen("numbers.txt", "r");

	int num = 0;

	num = sum_integers_in_file(infile);
	
	if (is_prime(num)){
		printf("prime");
	}else{
		printf("not prime");
	}
	


	fclose(infile);

	return 0;

}

void test_is_prime() {
	while (1) {
		int n = 0;
		printf("Enter number:");
		scanf("%d", n);

		printf("Is prime: %d", is_prime(n));
	}
}