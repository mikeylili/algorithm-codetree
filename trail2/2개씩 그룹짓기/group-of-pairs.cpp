#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int arr[10001];
    for (int i = 0; i < 2 * N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+2*N);
    int max = 0;
    for (int i = 0; i < N; i++){
        int n = arr[i] + arr[2*N - i - 1];
        if (max < n) max = n;
    }
    cout << max;
    return 0;
}