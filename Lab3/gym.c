#include"gyms.h" 

double get_score(int type, int number) {
	double score;

	printf("Enter score for ");
	if (type == EXAM) {
		printf("exam ");
	} 
	else if (type == PROJECT) {
		printf("project ");
	}
	else if (type == LAB) {
		printf(" lab ");
	}
	printf("%d(%%): ", number);

	scanf("%lf", &score);

	return score;
}

double calculate_average(double score1, double score2){
	return (score1+score2)/2;
}
double calculate_weighted_average(double average_exam_score, double average_lab_score, double average_project_score){
	return (average_exam_score * EXAM_WEIGHT + average_lab_score * LAB_WEIGHT + average_project_score * PROJECT_WEIGHT) 
			/ (EXAM_WEIGHT + LAB_WEIGHT + PROJECT_WEIGHT);
}

void display_weighted_average(double weighted_average) {
	printf("Weighted average: %%%.3lf\n", weighted_average);
}