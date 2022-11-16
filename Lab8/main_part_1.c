#include "Part1.h"

#define RUN_PART_1 0
#define ALLOCATE_SIZE 100

#if RUN_PART_1

int main(void) {
	
	FILE*infile = fopen("numbers.txt", "r"); 

	int arr[ALLOCATE_SIZE];
	int size = 0; // <- # of items filled from file (not allocated size)

	size = fill_array_from_file(infile, arr, ALLOCATE_SIZE);
	reverse_array(arr, size);

	// display array contents after reversal
	for (int index = 0; index < size; index++) {
		printf("%d\n", arr[index]);
	}
}

#endif