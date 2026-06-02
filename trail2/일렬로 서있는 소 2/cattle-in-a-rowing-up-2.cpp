#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int A[101];
    int cnt = 0;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N-2; i++){
        for (int j = i+1; j < N-1; j++){
            for (int k = j+1; k < N; k++){
                if (A[i] <= A[j] && A[j] <= A[k]) cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}