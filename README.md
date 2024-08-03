# Tic-Tac-Toe Game

## Classic Command-Line Tic-Tac-Toe Game

Welcome to the Tic-Tac-Toe Game project! This simple command-line application allows you to play the classic game of Tic-Tac-Toe with another player.

## Introduction

This project is a C++ implementation of the Tic-Tac-Toe game. Players take turns to place their mark (X or O) on a 3x3 grid. The game checks for wins and ties and displays the game board after each move.

## Installation and Usage Instructions

### Prerequisites

To compile and run this application, you need to have a C++ compiler installed on your machine. The most commonly used compiler is g++, which is part of the GNU Compiler Collection (GCC).

### Usage

1. The program will prompt each player to make a move. Enter the row and column (both between 0 and 2) to place your mark.
2. The game will display the updated board after each move and announce the result when the game ends.

### Example

```
Enter row (0-2) and column (0-2): 0 0
Player 1 (X) has made a move.

     |     |     
  X  |     |     
_____|_____|_____
     |     |     
     |     |     
_____|_____|_____
     |     |     
     |     |     
     |     |     

Enter row (0-2) and column (0-2): 1 1
Player 2 (O) has made a move.

     |     |     
  X  |     |     
_____|_____|_____
     |     |     
     | O  |     
_____|_____|_____
     |     |     
     |     |     
     |     |     

...
```

## Code Overview

The game consists of the following components:

- **`printGrid(char space[3][3])`**: Prints the current state of the game board.
- **`checkWin(char space[3][3], char player)`**: Checks if the specified player has won.
- **`checkTie(char space[3][3])`**: Checks if the game is a tie.

### Main Loop

1. Initializes the game board and player turns.
2. Alternates between Player 1 (X) and Player 2 (O) for moves.
3. Validates player moves and updates the board.
4. Checks for win or tie conditions after each move.
5. Displays the game result and prompts for a new game.

## Contributor Expectations

If you'd like to contribute to this project, please follow these guidelines:

1. **Fork the repository**: Create a personal copy of the repository on your GitHub account.
2. **Create a new branch**: Use `git checkout -b branch-name` to create a new branch for your feature or bugfix.
3. **Commit your changes**: Use descriptive commit messages to explain your changes.
4. **Push to the branch**: Push your changes to your forked repository using `git push origin branch-name`.
5. **Create a pull request**: Submit a pull request to the original repository with a detailed description of your changes.

## Known Issues

- The program does not currently handle invalid input gracefully (e.g., non-integer inputs).
- The game does not provide an option to restart or quit, other than ending the program.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

- [C++ Documentation](https://en.cppreference.com/w/)
- [GNU Compiler Collection (GCC)](https://gcc.gnu.org/)

Feel free to reach out with any questions or suggestions!
