#include <iostream>
#include <stdlib.h>

void copy_board (int* source, int* destination);

// Tests whether a player has won the game
bool evaluate_victory (int* board, int player);

// Prints the state of the board to screen
void show_board (int * board);

// Safely introduces a value to the board
bool input_value (int *board, int position, int player);

// Returns the next play by the computer by backtracking
int computer_play (int * board);

// Checks if the board is full
bool full_board (int * board);

bool defeat_is_impossible (int * board, int position, int player);


int main (int argc, char* argv[]){
    int board [9] = {0,0,0,0,0,0,0,0,0};
    show_board (board);
    int player = 2;
    int position;

    // If no side has won yet
    while (!evaluate_victory(board, 1) && !evaluate_victory(board, 2)
           && !full_board(board)){
        if (player == 1){
            do {std::cout << "Player " << player << ", Enter the position" <<
                std::endl;
                std::cin >> position;
            }
            while(!input_value (board, position, player));
        }
        else{
            int cp = computer_play (board);
            std::cout << "Computer plays " << cp << std::endl;
            input_value (board, cp, player);
        }
        show_board (board);
        player = player==1?2:1;
    }
}


void copy_board (int* destination, int* source){
    for (int i = 0; i < 9; i++){
        destination[i] = source[i];
    }
}

/** Makes a play given the board, the position and the player
 */
bool input_value (int *board, int position, int player){
    if (position > 8 || position < 0){
        std::cout << "Invalid position entered" << std::endl;
        return false;
    }
    if ((player != 1) && (player != 2)){
        std::cout << "Invalid player entered" << std::endl;
        return false;
    }
    if (board[position] != 0){
        std::cout << "This square has already been used" << std::endl;
        return false;
    }
    else{
        board [position] = player;
        return true;
    }

}

bool evaluate_victory (int* board, int player){
    if (player != 1 && player != 2){
        std::cerr << "ERROR: Invalid player selected" << std::endl;
        exit (1);
    }

    // There are only 8 ways to win a game: 3 horizontal lines, 3 vertical
    // lines and 2 diagonal lines.

    // Horizontal lines
    for (int i = 0; i < 3; i++){
        if (    (board[   3*i ] == player)
             && (board[3*i + 1] == player)
             && (board[3*i + 2] == player)){
            return true;
        }
    }

    // Vertical lines
    for (int i = 0; i < 3; i++){
        if (    (board[  i  ] == player)
             && (board[i + 3] == player)
             && (board[i + 6] == player)){
            return true;
        }
    }

    // Diagonal lines
    if (((board[0] == player) && (board[4] == player) && (board[8]==player))
     || ((board[2] == player) && (board[4] == player) && (board[6]==player))){
        return true;
    }

    return false;
}

bool full_board (int * board){
    int product = 1;
    for (int i = 0; i < 9; i++){
        product *= board[i];
    }
    return (bool) product;   // Will be true if the array is already full
}

// Functions related to the display
char map_to_symbol (int value){
    if (value == 0) return ' ';
    if (value == 1) return 'X';
    if (value == 2) return 'O';
    return ' ';
}
void print_symbol_line (int * board, int row){
    std::cout << " " << map_to_symbol (board[3*row]) << " | "
        << map_to_symbol (board[3*row + 1]) << " | "
        << map_to_symbol (board[3*row + 2]) << std::endl;
}
void print_horizontal_line (){
    std::cout << "----------" << std::endl;
}

void show_board (int * board){
    std::cout << std::endl;
    print_symbol_line (board, 2);
    print_horizontal_line ();
    print_symbol_line (board, 1);
    print_horizontal_line ();
    print_symbol_line (board, 0);
    std::cout << std::endl;
}

int computer_play (int * board) {
    int i, last_valid;
    for (i = 0; i < 9; i++){
        if (board[i] == 0){
            last_valid = i;
            if (defeat_is_impossible(board, i, 2)){
                return i;
            }
        }
    }
    return last_valid;
}

bool defeat_is_impossible (int * board, int position, int player){

    if (full_board(board)) return true;

    int h_board[9];
    copy_board (h_board, board);
    input_value (h_board, position, player);
    int sub_h_board[9];

    if (player == 2) {  // If computer play

        // Check if any subsequent enemy play leads to defeat
        bool immediate_enemy_victory = false;
        for (int i = 0; i < 9; i++){
            if (h_board[i] == 0) {
                // Check all available enemy plays
                copy_board (sub_h_board, h_board);
                immediate_enemy_victory = immediate_enemy_victory
                                       || evaluate_victory (board, 1);
            }
            if (immediate_enemy_victory) return false;
        }
    }

    bool defeat_impossible = true;
    for (int i = 0; i < 9; i++){
        if (h_board[i] == 0){
            defeat_impossible = defeat_impossible
                             && defeat_is_impossible (h_board, i, player==2?1:2);
        }
    }
    return defeat_impossible;

}
