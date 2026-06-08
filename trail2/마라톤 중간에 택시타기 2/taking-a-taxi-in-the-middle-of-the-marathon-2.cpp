#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int max_dir = INT_MAX;
    for (int i = 1; i < n-1; i++){
        int dir = 0;
        for (int j = 0; j < n-1; j++){
            if (j != i){
                int d = j+1;
                if (j+1 == i) d = j+2;
                dir += (abs(x[j]-x[d]) + abs(y[j]-y[d]));
            }
        }
        if (max_dir > dir) max_dir = dir;
    }
    cout << max_dir;
    return 0;
}