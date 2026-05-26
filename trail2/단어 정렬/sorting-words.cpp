#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string strarr[101];
    for (int i = 0; i < n; i++){
        cin >> strarr[i];
    }
    sort(strarr, strarr+n);
    for (int i = 0; i < n; i++){
        cout << strarr[i] << "\n";
    }
    return 0;
}