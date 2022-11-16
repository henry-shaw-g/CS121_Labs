#include "TicTacToe.h"

void display_board(Board* board){
	int row, col;
		
	// column labels
	printf("+");
	for (col = 0; col < board->size; col++) {
		printf(" %d", col);
	}
	printf("\n");

	for (row = 0; row < board->size; row++) {
		// row labels
		printf("%d ", row);

		col = 0;
		char cell_symbol = get_cell_symbol(board->cells[row][col]);
		printf("%c", cell_symbol);
		for (; col < board->size - 1; col++, (cell_symbol = get_cell_symbol(board->cells[row][col])), printf("%c", cell_symbol)) {
			printf("|");
		}

		printf("\n  ");

		// horizontal divder
		if (row < board->size - 1) {
			printf("-");
			for (col = 0; col < board->size - 1; printf("-"), col++) {
				printf("+");
			}
			printf("\n");
		}
	}
}
Coord get_move(Board* board) {
	Coord move = {-1, -1};
	printf("Where you would you like to move (row, col): ");
	scanf("%d%d", &move.row, &move.col);
	while (
		move.row >= board->size || move.col >= board->size || 
		move.row < 0 || move.col < 0 ||
		board->cells[move.row][move.col] != EMPTY_CELL) 
	{
		printf("Invalid. Where would you like to move (row, col)?: ");
		scanf("%d%d", &move.row, &move.col);
	}

	return move;
};

void apply_move(Board* board, Player* player, Coord move) {
	board->cells[move.row][move.col] = player->symbol;
}
int check_win(Board* board, Player* player, Coord move) {
	int row, col;
	int line_continues;
	// check row
	row = move.row;
	for (col = 0, line_continues = 1; line_continues && col < board->size; col++) {
		line_continues = board->cells[row][col] == player->symbol;
	}
	if (line_continues) {
		return 1;
	}
	// check column
	col = move.col;
	for (row = 0, line_continues = 1; line_continues && row < board->size; row++) {
		line_continues = board->cells[row][col] == player->symbol;
	}
	if (line_continues) {
		return 1;
	}
	// check first diagonal
	if (move.row == move.col) {
		for (col = 0, row = 0, line_continues = 1; line_continues && row < board->size && col < board->size; col++, row++) {
			line_continues = board->cells[row][col] == player->symbol;
		}
		if (line_continues) {
			return 1;
		}
	}
	// check second diagonal
	if (move.row == board->size - move.col - 1) {
		for (col = 0, row = board->size-1, line_continues = 1; line_continues && row >= 0 && col < board->size; col++, row--) {
			line_continues = board->cells[row][col] == player->symbol;
		}
		if (line_continues) {
			return 1;
		}
	}

	return 0;
}


int turn_order(void)
{
	return rand() % 2;
}

void get_size(int* size)
{
	do
	{
		printf("Enter the desired board size:\n");
		scanf("%d", size);
	} while (*size > MAX_BOARD_SIZE);
}

void init_board(Board * board) {
	// assumes board size was set to the desired user input
	for (int row = 0; row < board->size; row++) {
		for (int col = 0; col < board->size; col++) {
			board->cells[row][col] = EMPTY_CELL;
		}
	}
}

char get_cell_symbol(int cell_value) {
	switch (cell_value) {
		case X_CELL:
			return 'x';
		case O_CELL:
			return 'o';
		default:
			return ' ';
	}
}