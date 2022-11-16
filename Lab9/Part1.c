#include "Part1.h"

#define USE_POINTER_VERSION 1

// precond: char is null termaniated (otherwise bad things)
#if USE_POINTER_VERSION
int get_string_length(char* string) {
	int length = 0;
	while (*string != '\0'){
		string++; //increments pointer to next character address (1 byte)
		length++;
	}
	return length - 1;
}
#else
int get_string_length(char* string) {
	int length = 0;
	while (string[length] != '\0') {
		length++;
	}
	return length - 1;
}
#endif

#if USE_POINTER_VERSION
char* reverse_string(char* string) {
	int length = get_string_length(string);
	char* string_start = string;
	char* string_end = string + length;
	char temp = '0';
	for (int i = 0; string_start<string_end; i++) {
		
		temp = *string_start;//string[i];
		*string_start = *string_end;//string[i] = string[length - i];
		*string_end = temp;//string[length - i] = temp;

		string_start++;
		string_end--;
	}

	return string;
}
#else
char* reverse_string(char* string) {
	int length = get_string_length(string);
	char temp = '0';
	for (int i=0;i<length/2;i++){
		temp = string[i];
		string[i] = string[length - i];
		string[length - i] = temp;
	}

	return string;
}
#endif