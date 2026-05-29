#include <iostream>
using namespace std;

int N, M;

int InRange(int x, int y){
    return (x >= 0 && y >= 0 && x < N && y < M);
}
int main() {
    // Please write your code here.
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int dir_num = 0;
    int arr[101][101] = {0};
    int x = 0, y = 0;
    cin >> N >> M;
    for (int i = 1; i <= N * M; i++ ){
        arr[x][y] = i;
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];
        if (!(InRange(nx, ny)) || arr[nx][ny] != 0) dir_num = (dir_num + 1) % 4;
        x += dx[dir_num];
        y += dy[dir_num];
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}