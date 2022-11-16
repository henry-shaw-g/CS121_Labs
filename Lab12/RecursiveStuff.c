#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <windows.h>

#define ANIMATE_TOWERS_HANOI 1

// function signatures
// dont feed me negatives
int sum_digits_recursive(int n);
void reverse_string_recursive(char* str_start, char* str_end);

// towers of hanoi funcs
void move_top(int towers[][3], int s, int t);
void solve_towers(int towers[][3], int s, int t, int a, int n);
void print_towers(int towers[][3]);

int main (){


	printf("%d\n", sum_digits_recursive(1252));
	printf("%d\n", sum_digits_recursive(111));

	char str[20] = "hello";
	printf("%s\n", str);
	char* str_start = str;
	char* str_end = str_start + 4;
	reverse_string_recursive(str_start, str_end);
	printf("reversed: %s\n", str);

	puts("");
	puts("");

	// Towers:
	int towers[5][3] = {0}; // hopefully all cells default to zero
	// assign ground
	for (int col = 0; col < 3; col++) {
		towers[4][col] = -1;
	}
	// assign initial
	towers[3][0] = 3;
	towers[2][0] = 2;
	towers[1][0] = 1;

	print_towers(towers);
	puts("\nSolving.");
	system("Pause");

	solve_towers(towers, 0, 1, 2, 3);
	//move_top(towers, 0, 1);
	print_towers(towers);

	return 1;
}

int sum_digits_recursive(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n % 10 + sum_digits_recursive(n / 10);
	}

}

void reverse_string_recursive(char* str_start, char* str_end) {
	
char temp = '\0';

	if(*str_start >= *str_end)// || *str_start > *str_end)
	{
		return 0;
	}
	else
	{
		temp = *str_start;
		*str_start = *str_end;
		*str_end = temp;

		reverse_string_recursive((str_start + 1), (str_end - 1));

	}
}

void move_top(int towers[][3], int s, int t) {
	int row = 0;
	int disc = 0;

	// get top disc
	for (row = 0; disc == 0; row++, disc = towers[row][s]);

	// take off top
	disc = towers[row][s];
	towers[row][s] = 0;

	// get empty top
	for (row = 0; towers[row + 1][t] == 0; row++);
	towers[row][t] = disc;
}

// only solves for 3 posts, for now >:), precond: 0 <= n <= 9
void solve_towers(int towers[][3], int s, int t, int a, int n) {

	// implicit base case of n == 0 (do nothing)
	if (n > 0) {
		// move n - 1 discs from the source post to the aux post
		solve_towers(towers, s, a, t, n - 1);

		// move the current top disc on the source post (the original n disc) to the target post
		move_top(towers, s, t);

#if ANIMATE_TOWERS_HANOI
		system("cls");
		print_towers(towers);
		Sleep(400);
#endif

		// move n - 1 discs from the aux post to the target post
		solve_towers(towers, a, t, s, n - 1);
	}
}

void print_towers(int towers[][3]) {
	for (int row = 0; towers[row][0] != -1; row++) {
		for (int col = 0; col < 3; col++) {
			printf("%2d", towers[row][col]);
		}
		printf("\n");
	}
}