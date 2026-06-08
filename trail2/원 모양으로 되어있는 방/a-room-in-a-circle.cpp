#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min_dist = INT_MAX;
    for (int i = 0; i < n; i++){
        int dist = 0;
        for (int j = 1; j < n; j++){
            int m = i+j;
            if (i+j >= n){
                m = i+j-n;
            }
            dist += a[m] * j;
        }
        if (min_dist > dist) min_dist = dist;
    }
    cout << min_dist;
    // Please write your code here.

    return 0;
}