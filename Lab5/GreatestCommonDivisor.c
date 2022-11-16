#include "GreatestCommonDivisor.h"

int greatest_common_divisor(int n, int d) {
	n = abs(n);
	d = abs(d);

	for (int r = 1; r > 0; r = n % d, n = d, d = r);

	return n;
}

void display_gcd(int gcd){
	printf("GCD: %d\n\n\n", gcd);
}

int ask_for_num(void)
{
	int num = 0;

	printf("Enter a number:\n");
	scanf("%d", &num);

	return num;

}