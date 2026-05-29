#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Please write your code here.
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2) cout << "Yes";
    else cout << "No";
    return 0;
}