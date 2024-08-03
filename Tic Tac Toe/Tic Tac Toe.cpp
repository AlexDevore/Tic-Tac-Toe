#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void printGrid(char space[3][3]) {
    cout << "     |     |     \n";
    cout << "  " << space[0][0] << "  |  " << space[0][1] << "  |  " << space[0][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << space[1][0] << "  |  " << space[1][1] << "  |  " << space[1][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << space[2][0] << "  |  " << space[2][1] << "  |  " << space[2][2] << "  \n";
    cout << "     |     |     \n";
}
bool checkWin(char space[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((space[i][0] == player && space[i][1] == player && space[i][2] == player) ||
            (space[0][i] == player && space[1][i] == player && space[2][i] == player)) {
            return true;
        }
    }
    if ((space[0][0] == player && space[1][1] == player && space[2][2] == player) ||
        (space[0][2] == player && space[1][1] == player && space[2][0] == player)) {
        return true;
    }
    return false;
}

int main()
{
    while (true) {
        bool Bplay1 = true;
        bool match = true;
        bool Bplay2 = true;
        bool win1 = false;
        bool win2 = false;
        char space[3][3] = { { ' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ',' '} };
        int row, col;
        char play1 = 'X';
        char play2 = 'O';
        printGrid(space);
        while (match) {
            while (Bplay1) {
                cout << "Player 1 make your move." << endl;
                cout << "Enter row (0-2) and column (0-2): ";
                cin >> row >> col;

                if (space[row][col] != ' ' || row < 0 || row > 2
                    || col < 0 || col > 2) {
                    cout << "Invalid move. Try again.\n";
                }
                else {
                    Bplay1 = false;
                    Bplay2 = true;
                    space[row][col] = play1;
                    printGrid(space);
                    if (checkWin(space, play1)) {
                        cout << "Player 1 (X) has won!\n";
                        Bplay2 = false;
                        Bplay1 = false;
                        match = false;
                    }
                }

            }
            while (Bplay2) {
                cout << "Player 2 make your move." << endl;
                cout << "Enter row (0-2) and column (0-2): ";
                cin >> row >> col;

                if (space[row][col] != ' ' || row < 0 || row > 2
                    || col < 0 || col > 2) {
                    cout << "Invalid move. Try again.\n";
                }
                else {
                    Bplay1 = true;
                    Bplay2 = false;
                    space[row][col] = play2;
                    printGrid(space);
                    if (checkWin(space, play2)) {
                        cout << "Player 2 (O) has won!\n";
                        Bplay2 = false;
                        Bplay1 = false;
                        match = false;
                    }
                }
            }
        }
    }
    return 0;
}