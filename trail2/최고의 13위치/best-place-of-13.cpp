#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int A[21][21];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) cin >> A[i][j];
    }
    int result = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N-2; j++){
            int n = A[i][j] + A[i][j+1] + A[i][j+2];
            result = max(n, result);
        }
    }
    cout << result;
    return 0;
}