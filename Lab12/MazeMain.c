#include "Maze.h" 

#if 0
int main(void)
{
	char maze[8][8] = {
	{ ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' '},
	{ ' ', 'X', ' ', ' ', ' ', ' ', ' ', ' '},
	{ 'X', 'X', ' ', ' ', ' ', ' ', 'X', ' '},
	{ ' ', ' ', 'X', ' ', 'X', ' ', ' ', ' '},
	{ 'X', ' ', ' ', ' ', ' ', ' ', 'X', 'X'},
	{ ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' '}, 
	{ ' ', 'X', ' ', ' ', 'X', ' ', 'X', ' '},
	{ ' ', ' ', ' ', ' ', ' ', ' ', 'X', ' '},
	};

	int visiting[8][8] = { 0 };
	
	int found_path = solve_maze(0, 0, maze, visiting);
	if (found_path) {
		printf("Yes path :)\n");
	}
	else {
		printf("No path >:C\n");
	}

	printf("+-----------------+\n");
	for (int i = 0; i<8; i++){
		printf("|");
		for(int j =0;j<8;j++){
			printf("%2c", maze[i][j]);
		}
		printf(" |\n");
	}
	printf("+-----------------+\n");
return 0;
}
#endif