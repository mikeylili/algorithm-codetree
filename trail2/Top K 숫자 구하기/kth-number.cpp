#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    int arr[1001];
    cin >> N;
    cin >> K;
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N);
    cout << arr[K-1];

    return 0;
}