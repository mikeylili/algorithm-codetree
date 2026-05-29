#include <iostream>
using namespace std;

int N;
int InRange(int x, int y){
    return (x >= 0 && y >= 0 && x < N && y < N);
}

int main() {
    // Please write your code here.
    char mirror[1001][1001] = {0};
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> mirror[i][j];
        }
    }
    int K;
    cin >> K;
    int dx[4] = {-1, 0, 1, 0}; //URDL
    int dy[4] = {0, 1, 0, -1};
    int dir_num = ((K-1) / N + 2) % 4;
    int x, y;
    if (dir_num == 2) {x = 0; y = K-1;}
    else if (dir_num == 3) {x = (K-1) % N; y = N-1;}
    else if (dir_num == 0) {x = N-1; y = N - ((K-1) % N) - 1;}
    else if (dir_num == 1) {x =  N - ((K-1) % N) - 1; y = 0;}
    int cnt = 0;
    while (InRange(x, y)){
        cnt++;
        if (mirror[x][y] == '/' && dir_num == 2) dir_num = 3; 
        else if (mirror[x][y] == '/' && dir_num == 3) dir_num = 2;
        else if (mirror[x][y] == '/' && dir_num == 1) dir_num = 0; 
        else if (mirror[x][y] == '/' && dir_num == 0) dir_num = 1; 
        else  if (mirror[x][y] == '\\' && dir_num == 2) dir_num = 1; 
        else if (mirror[x][y] == '\\' && dir_num == 1) dir_num = 2;
        else if (mirror[x][y] == '\\' && dir_num == 3) dir_num = 0; 
        else if (mirror[x][y] == '\\' && dir_num == 0) dir_num = 3; 
        x += dx[dir_num];
        y += dy[dir_num];
    }
    cout << cnt;
    return 0;
}