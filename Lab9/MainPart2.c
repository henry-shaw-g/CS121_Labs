#include "Part2.h"

int main(void)
{
	char source[] = "hello";
	char destination[100] = {'\0'};
	char s1[] = "123";
	char s2[100] = "123";

	my_strcpy(destination, source);

	printf("comp = %d\n", my_strcmp(s1, s2));

	puts(source);
	puts(destination);

	my_strcat(destination, source);
	puts(destination);
	return 0;
}
