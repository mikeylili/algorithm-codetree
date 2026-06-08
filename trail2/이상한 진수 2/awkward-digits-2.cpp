#include <iostream>
#include <cmath>

using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    int ch = 0;
    for (int i = 1; i < a.length(); i++){
        if (a[i] == '0') {a[i] = '1'; ch = 1;break;};
    }
    if (ch == 0){
        a[a.length()-1] = '0';
    }
    int n = 0;
    for (int i = 0; i < a.length(); i++){
        n+= (a[i] - '0') * pow(2, a.length()-i-1);
    }
    cout << n;

    return 0;
}