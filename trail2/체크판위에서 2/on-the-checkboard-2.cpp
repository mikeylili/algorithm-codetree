#include <iostream>

using namespace std;

int R, C;
char grid[15][15];

int main() {
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }
    bool s = 0;
    if (grid[0][0] == 'B') s = 1;
    int cnt = 0;
    if ((s==0 && grid[R-1][C-1] == 'B') || (s==1 && grid[R-1][C-1] == 'W')){
        for (int i = 1; i < R-1; i++){
        for (int j = 1; j < C-1; j++){
            if (s == 0 && grid[i][j] == 'B'){
                for (int i2 = i+1; i2 < R-1; i2++){
                    for (int j2 = j+1; j2 < C-1; j2++){
                        if (grid[i2][j2] == 'W') cnt++;
                    }
                }
            }
            if (s == 1 && grid[i][j] == 'W'){
                for (int i2 = i+1; i2 < R-1; i2++){
                    for (int j2 = j+1; j2 < C-1; j2++){
                        if (grid[i2][j2] == 'B') cnt++;
                    }
                }
            }
        }
    }
    }
    

    // Please write your code here.
    cout << cnt;
    return 0;
}