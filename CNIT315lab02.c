#include <stdio.h>
#include <stdbool.h>

#define NUMROWS (6)
#define NUMCOLS (6)

void display(char maze[NUMROWS][NUMCOLS])
{
    int rowNum, colNum;

    for (rowNum = 0; rowNum < NUMROWS; rowNum++)
    {
        for(colNum = 0; colNum < NUMCOLS; colNum++)
        {
            printf("%c ", maze[rowNum][colNum]);
        }
        printf("\n");
    }
}

bool mazeGo(char maze[NUMROWS][NUMCOLS], int x, int y)
{
    char G = maze[5][4];
    char S = maze[0][0];
    maze[x][y] = '+';

    if (maze[x][y] == G)
    {
        return true;
    }
    else
    {
        if (x == NUMROWS - 1 && y == NUMCOLS - 1)
        {
            return true;
        }

        if (x + 1 < NUMROWS && maze[x + 1][y] == '.')
        {
            if (mazeGo(maze, x + 1, y))
            {
                return true;
            }
        }

        if (x - 1 >= 0 && maze[x - 1][y] == '.')
        {
            if (mazeGo(maze, x - 1, y))
            {
                return true;
            }
        }

        if (y + 1 < NUMCOLS && maze[x][y + 1] == '.')
        {
            if (mazeGo(maze, x, y + 1))
            {
                return true;
            }
        }

        if (y - 1 >= 0 && maze[x][y - 1] == '.')
        {
            if (mazeGo(maze, x, y - 1))
            {
                return true;
            }
        }
        maze[x][y] = '.';
        return false;
    }

}

int main()
{
    printf("Incomplete Maze\n");
    printf("================\n");
    char maze[NUMROWS][NUMCOLS] = { {'S', '#', '#', '#', '#', '#'},
                                    {'.', '.', '.', '.', '.', '#'},
                                    {'#', '.', '#', '#', '#', '#'},
                                    {'#', '.', '#', '#', '#', '#'},
                                    {'.', '.', '.', '#', '.', 'G'},
                                    {'#', '#', '.', '.', '.', '#'}, };
    display(maze);

    if (mazeGo(maze, 0, 0))
    {
        printf("\nCompleted Maze\n");
        printf("================\n");
        display(maze);
    }
    else 
    {
        printf("No path found!");
    }

    return 0;
}