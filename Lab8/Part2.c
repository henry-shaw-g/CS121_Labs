#include "Part2.h"

int rand_num(){
	return (rand() % 100)+1;
}

int compute_frequencies(int* list, int size, int* frequency_table, int frequency_table_size) {
	int index;
	// iterate over each index
	for (index = 0; index < frequency_table_size; index++) {
		// increment count at frequency table of index
		frequency_table[list[index]] = 0;
	}

	// iterate over each index
	for (index = 0; index < size; index++) {
		// increment count at frequency table of index
		frequency_table[list[index]]++;
	}
}

void print_table(int arr[], int size){
	for(int i = 0; i <= size; i++){
		printf("%d:  %d\n\n", i, arr[i]);
	}
}