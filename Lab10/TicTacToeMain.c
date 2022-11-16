#include "TicTacToe.h"

int main (){
	srand((unsigned int)time(NULL));

	// Get the desired size of the board:
	
	Board board;

	get_size(&board.size);
	printf("Creating board of size %d ...", board.size);
	init_board(&board);

	Player playerX;
	playerX.symbol = X_CELL;
	Player playerO;
	playerO.symbol = O_CELL;

	Player *current_player = &playerX, *next_player = &playerO;

	Coord move = {-1, -1};
	int has_won = 0;
	// until game has been won by a player
	while (!has_won) {
		system("cls");
		printf("Player %c turn's ...\n", get_cell_symbol(current_player->symbol));

		// display board
		display_board(&board);
		// get move
		move = get_move(&board);
		// apply the move
		apply_move(&board, current_player, move);

		system("cls");
		printf("Player %c turn's ...\n", get_cell_symbol(current_player->symbol));
		display_board(&board);

		// check if won
		has_won = check_win(&board, current_player, move);
		if (has_won) {
			printf("Player %c has won!", get_cell_symbol(current_player->symbol));
		}
		else {
			// go to next player?
			puts("Going to next turn.");
			system("pause");

			Player* temp_player = current_player;
			current_player = next_player;
			next_player = temp_player;
		}
	}

	return 0;
}