#include "Sentences.h"

#if 0
int main(void) {

	srand((unsigned int)time(NULL));

	char* articles[] = {
		"a",
		"one",
		"some",
		"many",
	};

	char* verbs[] = {
		"drove",
		"jumped",
		"run",
		"ran",
		"walked",
		"skipped",
	};

	char* nouns[] = {
		"boy",
		"girl",
		"dog",
		"town",
		"car"
	};

	char* prepositions[] = {
		"to",
		"from",
		"over",
		"under",
		"on",
	};

	for (int i = 0; i < 20; i++) {
		build_sentence(articles, nouns, verbs, prepositions);
	}

	return 0;
}
#endif