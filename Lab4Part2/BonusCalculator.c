
#include "BonuseCalculator.h"

int get_yes_or_no() {
	char response = '\0';

	scanf(" %c", &response); // whitespace for %c to ignore newlines

	return (response == 'y');
}

int apply_bonus(int current_bonus, int reward_bonus) {
	return current_bonus + reward_bonus;
}

int get_bonus() {
	int total_bonus = 0;

	// Apply All-Star bonus
	printf("Did player appear in an All-Star game? (y/n): ");
	total_bonus = apply_bonus(total_bonus, get_yes_or_no() * ALL_STAR);

	//apply Regular season MVP bounus
	printf("Did player get Regular season MVP? (y/n): ");
	total_bonus = apply_bonus(total_bonus, get_yes_or_no() * REGULAR_MVP);

	//apply World series MVP bounus
	printf("Did player get World series MVP? (y/n): ");
	total_bonus = apply_bonus(total_bonus, get_yes_or_no() * WORLD_MVP);

	//apply Gold glove award bounus
	printf("Did player get gold glove award ? (y/n): ");
	total_bonus = apply_bonus(total_bonus, get_yes_or_no() * GOLD_GLOVE);

	// Apply Home run champ bonus
	printf("Was player a home run champ? (y/n): ");
	total_bonus = apply_bonus(total_bonus, get_yes_or_no() * HOMERUN_CHAMP);

	// Apply Batting average champ bonus
	printf("Was player a batting average champ ? (y/n): ");
	total_bonus = apply_bonus(total_bonus, get_yes_or_no() * ALL_STAR);

	//apply SILVER SLUGER bounus
	printf("Did player get SILVER SLUGER MVP? (y/n): ");
	total_bonus = apply_bonus(total_bonus, get_yes_or_no() * SILVER_SLUGGER);
}