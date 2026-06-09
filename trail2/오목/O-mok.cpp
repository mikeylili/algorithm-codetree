#include <iostream>

using namespace std;

int board[19][19];

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    // Please write your code here.
    int win = 0;
    int wini, winj;
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            if (board[i][j] != 0 &&board[i][j] == board[i][j+1] && board[i][j+1] == board[i][j+2] && board[i][j+2] == board[i][j+3] && board[i][j+3] == board[i][j+4]) {win = board[i][j];wini = i+1;winj = j+3;}
            if (board[i][j] != 0 &&board[i][j] == board[i+1][j]&&board[i+1][j] == board[i+2][j]&&board[i+2][j] == board[i+3][j]&&board[i+3][j] == board[i+4][j]){win = board[i][j];wini = i+3;winj = j+1;}
            if (board[i][j] != 0 &&board[i][j] == board[i+1][j+1]&&board[i+1][j+1] == board[i+2][j+2]&&board[i+2][j+2] == board[i+3][j+3]&&board[i+3][j+3] == board[i+4][j+4]){win = board[i][j];wini = i+3;winj = j+3;}
        }
    }
    for (int i = 4; i < 19; i++){
        for (int j = 4; j < 15; j++){
            if (board[i][j] != 0 &&board[i][j] == board[i-1][j+1] && board[i-1][j+1] == board[i-2][j+2] && board[i-2][j+2] == board[i-3][j+3] && board[i-3][j+3] == board[i-4][j+4]) {win = board[i][j];wini = i-1;winj = j+3;}
        }
    }
    for (int i = 4; i < 19; i++){
        for (int j = 4; j < 19; j++){
            if (board[i][j] != 0 &&board[i][j] == board[i][j-1] && board[i][j-1] == board[i][j-2] && board[i][j-2] == board[i][j-3] && board[i][j-3] == board[i][j-4]) {win = board[i][j];wini = i+1;winj = j-1;}
            if (board[i][j] != 0 &&board[i][j] == board[i-1][j]&&board[i-1][j] == board[i-2][j]&&board[i-2][j] == board[i-3][j]&&board[i-3][j] == board[i-4][j]){win = board[i][j];wini = i-1;winj = j+1;}
           }
    }
    cout << win;
    if (win != 0){
        cout << "\n" << wini << " " << winj;
    }
    return 0;
}