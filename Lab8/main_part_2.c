#include "Part2.h"

#define NUM_RANDOM_NUMS 10000000

#define RUN_PART_2 0

#if RUN_PART_2
int main(void)
{
	srand((unsigned int) time(NULL));

	int* rand_array = malloc(NUM_RANDOM_NUMS * sizeof(int)); //{0};
	int freq_array[101] = { 0 };

	for (int index = 0; index < NUM_RANDOM_NUMS; index++)
	{
		rand_array[index] = rand_num();
	}

	compute_frequencies(rand_array, NUM_RANDOM_NUMS, freq_array, 101);

	print_table(freq_array, 101);

	return 0;
}
#endif