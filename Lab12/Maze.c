#include "Maze.h" 

int solve_maze(int x, int y, char maze[8][8], int visiting[8][8]) {
	visiting[y][x] = 1;
	int success = 0;
	// if the cell is the destination cell, return success
	if (x == 7 && y == 7) {
		success = 1;
	}

	int dx, dy, temp, i;
	// check each neighboring cell
	for (i = 0, dx = 1, dy = 0; !success && i < 4; i++, temp = dx, dx = dy, dy = -temp)
		// if a cell is unvisisted, run solve maze on it
		// if the cell solve is success return success
	{
		// make sure neighbor is in bounds & is not visited or blocked
		if (
			x + dx < 8 && x + dx >= 0 &&
			y + dy < 8 && y + dy >= 0 &&
			maze[y + dy][x + dx] != 'X' && visiting[y + dy][x + dx] != 1

			) {
			success = solve_maze(x + dx, y + dy, maze, visiting);
		}
 	}
	
	if (success) {
		printf("x: %d, y: %d\n", x, y);
		maze[y][x] = 'P';
	}
	return success;
}