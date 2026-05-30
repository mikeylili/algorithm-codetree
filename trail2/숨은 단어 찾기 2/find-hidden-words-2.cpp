#include <iostream>
#include <string>

using namespace std;

int N, M;
string arr[50];

int InRange(int i, int j){
    return (i>=0 && i < N && j >= 0 && j < M);
}
int Find_E(int i, int j) {
    int ch = 0;
    if (InRange(i+2, j) && arr[i+1][j] == 'E' && arr[i+2][j] == 'E') ch++;
    if (InRange(i-2, j) && arr[i-1][j] == 'E' && arr[i-2][j] == 'E') ch++;
    if (InRange(i, j+2) && arr[i][j+1] == 'E' && arr[i][j+2] == 'E') ch++;
    if (InRange(i, j-2) && arr[i][j-1] == 'E' && arr[i][j-2] == 'E') ch++;
    if (InRange(i-2, j-2) && arr[i-1][j-1] == 'E' && arr[i-2][j-2] == 'E') ch++;
    if (InRange(i+2, j+2) && arr[i+1][j+1] == 'E' && arr[i+2][j+2] == 'E') ch++;
    if (InRange(i+2, j-2) && arr[i+1][j-1] == 'E' && arr[i+2][j-2] == 'E') ch++;
    if (InRange(i-2, j+2) && arr[i-1][j+1] == 'E' && arr[i-2][j+2] == 'E') ch++;
    return ch;
}
int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++){
            if (arr[i][j] == 'L'){
                count += Find_E(i, j);
            }
        }
    }
    cout << count;

    // Please write your code here.

    return 0;
}