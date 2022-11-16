#include "Part2.h"

double revenue(int years){
	return 203.265 * pow(1.071,years);
}

int predict(double target_revenue) {

	// method 1:
	//return (int)(log(target_revenue / 203.265) / log(1.071) + 1);
	return ceil(log(target_revenue / 203.265) / log(1.071));

	// method 2:
	/*
	int y = 0;

	for (; revenue(y) < target_revenue; y++);
	
	return y;
	*/
}