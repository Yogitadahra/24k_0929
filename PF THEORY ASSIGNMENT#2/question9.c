#include <stdio.h>


#define SIZE 5


void displayGrid(char grid[SIZE][SIZE]) {
  
    for (int i = 0; i < SIZE; i++) {
      
        for (int j = 0; j < SIZE; j++) {
          
            printf("%c ", grid[i][j]);
          
        }
      
        printf("\n");
      
    }
  
}


int main() {

    char grid[SIZE][SIZE] = {

        {' ', ' ', 'I', 'X', ' '},

        {' ', 'X', ' ', ' ', ' '},

        {'I', ' ', 'X', 'X', ' '},

        {' ', ' ', ' ', 'I', 'X'},

        {' ', 'X', ' ', ' ', 'P'}

    };


    int playerX = 4; // Initial player position (row)

    int playerY = 4; // Initial player position (column)

    char move;


    while (1) {

        displayGrid(grid);

        printf("Move (W: up, S: down, A: left, D: right, Q: quit): ");

        scanf(" %c", &move);


        int newX = playerX;

        int newY = playerY;

        // Determine new position based on input

        switch (move) {
          
            case 'W':
          
            case 'w':
              
                newX--;
              
                break;
          
            case 'S':
          
            case 's':
              
                newX++;
              
                break;
          
            case 'A':
          
            case 'a':
              
                newY--;
              
                break;
          
            case 'D':
          
            case 'd':
              
                newY++;
              
                break;
          
            case 'Q':
          
            case 'q':
              
                printf("Quitting the game.\n");
              
                return 0; // Exit the program
          
            default:
              
                printf("Invalid move. Please try again.\n");
              
                continue; // Skip the rest of the loop
          
        }

        // Check for valid move

        if (newX < 0 || newX >= SIZE || newY < 0 || newY >= SIZE) {
          
            printf("Invalid move. You can't go outside the grid.\n");
          
            continue;
        }

       if (grid[newX][newY] == 'X') {
         
            printf("You hit an obstacle! You can't move there.\n");
         
            continue;
         
        }
      

        // Move player
      
        if (grid[newX][newY] == 'I') {
          
            printf("You collected an item!\n");
          
        }

        // Update grid
      
        grid[playerX][playerY] = ' '; // Empty the old position
      
        grid[newX][newY] = 'P'; // Update new position
      

        // Update player coordinates
      
        playerX = newX;
      
        playerY = newY;
      
    }
  

    return 0;
  
}



