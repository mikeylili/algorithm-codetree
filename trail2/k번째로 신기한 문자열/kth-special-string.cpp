#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    string T;
    cin >> N;
    cin >> K;
    cin >> T;
    string AS [101];
    int s = 0;
    for (int i = 0; i < N; i++){
        string S;
        cin >> S;
        if (S.rfind(T, 0) == 0) {AS[s] = S; s++;}
    }
    sort(AS, AS+s);
    cout << AS[K-1];
    return 0;
}