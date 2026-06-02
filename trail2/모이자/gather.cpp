#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int arr[101];
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    for (int i =0; i < N; i++){
        cin >> arr[i];
    }
    int result = 1000000;
    for (int i = 0; i < N; i++){
        int n = 0;
        for (int j = 0; j < N; j++){
            n += abs(i-j)*arr[j];
        }
        result = min(n, result);
    }
    cout << result;

    return 0;
}