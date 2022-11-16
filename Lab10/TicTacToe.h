#ifndef TICTACTOE_H
#define TICTACTOE_H 

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define MAX_BOARD_SIZE 100

#define EMPTY_CELL 0
#define X_CELL 1
#define O_CELL 2

typedef struct coord_t {
	int row;
	int col;
} Coord;

typedef struct board_t {
	int size;
	int cells[MAX_BOARD_SIZE][MAX_BOARD_SIZE];

} Board;

typedef struct player_t {
	char symbol;
} Player;



char get_cell_symbol(int cell_value);

void display_board (Board *board);

Coord get_move(Board* board);

void apply_move(Board* board, Player* player, Coord move);

int check_win(Board* board, Player* player, Coord move);

int turn_order(void);
void get_size(int* size);
void init_board(Board* board);

#endif