#include <math.h>
#include <string.h>
#include <stdio.h>
int valid(int i,int j,int sudoku[9][9])
{
	int row = i/3;
	int col = j/3;
	
	
}
void solve(int i,int j,int sudoku[9][9])
{
	
}
int main()
{
    int sudoku[9][9] = {
        {8, 3, 0, 1, 0, 0, 6, 0, 5},
        {0, 0, 0, 0, 0, 0, 0, 8, 0},
        {0, 0, 0, 7, 0, 0, 9, 0, 0},
        {0, 5, 0, 0, 1, 7, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 2, 0, 0},
        {0, 0, 0, 3, 4, 0, 0, 1, 0},
        {0, 0, 4, 0, 0, 8, 0, 0, 0},
        {0, 9, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 2, 0, 0, 6, 0, 4, 7}
    };

    // Display the Sudoku puzzle
    int i,j;
	for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
    
    
 
	return 0;	
}
