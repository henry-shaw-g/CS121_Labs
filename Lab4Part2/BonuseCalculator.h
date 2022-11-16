#ifndef BONUSE_CALCULATOR_H
#define BONUSE_CALCULATOR_H

#define ALL_STAR 25000
#define REGULAR_MVP 75000
#define WORLD_MVP 100000
#define GOLD_GLOVE 50000
#define SILVER_SLUGGER 35000
#define HOMERUN_CHAMP 25000
#define BAT_AVG_CHAMP 25000 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Gets a yes or no response from the user.
// Returns 1 (yes) or 0 (no)
int get_yes_or_no();

// Returns the updated bonus amount, incremented if the player got the reward (scanned for in the function)
int apply_bonus(int current_bonus, int reward_bonus);

// Gets the total bonus for a player (does the prompting)
int get_bonus();

#endif