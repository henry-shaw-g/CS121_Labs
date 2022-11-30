/*
	Lab 13: Bitwise op stuff
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define uint unsigned int

// prints the bits of an integer (grouped into bytes)
void print_bits(uint n);

// computer num * 2 ^ pow
int power2(uint num, uint pow);

// pack 4 chars into an integer
uint pack_chars(char c1, char c2, char c3, char c4);

int main(void) {
	// Part 1:
	int n = 0x0f;
	print_bits(n);
	n <<= 4;
	print_bits(n); // it is shown that the system fills vacant bits to zero

	// Part 2:
	int num, pow;
	printf("Enter an integer base: ");
	scanf("%d", &num);
	printf("Enter a power of 2: ");
	scanf("%d", &pow);
	printf("%d * 2 ^ %d = %d\n", num, pow, power2(num, pow));

	// Part 4:
	char c1, c2, c3, c4;
	printf("Enter 4 characters: ");
	scanf(" %c %c %c %c", &c1, &c2, &c3, &c4);
	// print as individual 32 bit uints
	printf("C1: "); print_bits((uint) c1);
	printf("C2: "); print_bits((uint) c2);
	printf("C3: "); print_bits((uint) c3);
	printf("C4: "); print_bits((uint) c4);
	// print as packed 32 bit int
	uint packed = pack_chars(c1, c2, c3, c4);
	print_bits(packed);

}

void print_bits(uint n) {
	uint b = 1;
	/*while ((b << 1) <= n) {
		b = b << 1;
	}*/
	uint s = sizeof(n) * 8;
	b <<= (s - 1);
	while (b > 0) {
		if (n >= b) {
			printf("1");
			n -= b;
		}
		else {
			printf("0");
		}
		b = b >> 1;
		s--;
		if (s % 8 == 0) {
			printf(" ");
		}
	}
	printf("\n");
}

int power2(uint num, uint pow) {
	return num << pow;
}

uint pack_chars(char c1, char c2, char c3, char c4) {
	uint packed = 0;
	packed |= c1; packed <<= 8;
	packed |= c2; packed <<= 8;
	packed |= c3; packed <<= 8;
	packed |= c4;
	return packed;
}