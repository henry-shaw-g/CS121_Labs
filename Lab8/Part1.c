#include"Part1.h" 

// fills array from file & returns number of items filled
int fill_array_from_file(FILE* infile, int arr[], int size)
{
		int index = 0;
		int temp = 0;
	
		for(; index < size && fscanf(infile, "%d", &temp) == 1; index ++)
		{
			arr[index] = temp;
		}

		return index;
}

// reverse le array
void reverse_array(int arr[], int size){
	int temp =0;
	for(int i=0; i<=(size/2); i++){
		temp = arr[size - 1 - i];
		arr[size - 1 - i] = arr[i];  
		arr[i] = temp;
	}
	
}
