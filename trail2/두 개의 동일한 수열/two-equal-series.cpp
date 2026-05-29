#include <iostream>
#include <bits//stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int A[101];
    int B[101];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < n; i++){
        cin >> B[i];
    }
    sort(A, A+n);
    sort(B, B+n);
    int same = 1;
    for (int i = 0; i < n; i++){
        if (A[i] != B[i]) same = 0;
    }
    if (same) cout << "Yes";
    else cout << "No";
    return 0;
}