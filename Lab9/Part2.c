#include "Part2.h"

char* my_strcpy(char* destination, const char* source)
{

	for(int index = 0; index <= my_strlen(source); ++index)
	{
		*(destination + index) = *(source + index);
	}
	return destination;
}

// append destination to source?
// precond: destination & source null terminated
// precond: destination has allocated room for source to be appended
char* my_strcat(char* destination, const char* source) {
	int dest_length = my_strlen(destination) + 1;
	int source_length = my_strlen(source) + 1;

	// start at null term character in dest
	for (int i = 0; i < source_length; i++) {
		destination[dest_length + i] = source[i];
	}
	destination[dest_length + source_length] = '\n';

	return destination;
}

int my_strcmp(const char* s1, const char* s2){
	int length1 = my_strlen(s1);
	int length2 = my_strlen(s2);
	int longest_length = 0;

	if(length1>= length2){
		longest_length = length1;
	}else{
		longest_length = length2;
	}

	for (int i =0; i < longest_length; i++){
		if(s1[i]<s2[i]){
			return -1;
		}else if(s1[i] > s2[i]){
			return 1;
		}
		return 0;
	}
}

int my_strlen(char* string) {
		int length = 0;
		while (*string != '\0') {
			string++; //increments pointer to next character address (1 byte)
			length++;
		}
		return length - 1;
}