#include <iostream>
using namespace std;

bool arr[2001][2001] = {0};
int main() {
    // Please write your code here.
    int ax1, ay1, ax2, ay2;
    cin >> ax1 >> ay1 >> ax2 >> ay2;
    int offset = 1000;
    ax1 += offset;
    ay1 += offset;
    ax2 += offset;
    ay2 += offset;
    for (int i = ax1; i < ax2; i++){
        for (int j = ay1; j < ay2; j++){
            arr[i][j] = true;
        }
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += offset;
    y1 += offset;
    x2 += offset;
    y2 += offset;
    for (int i = x1; i < x2; i++){
        for (int j = y1; j < y2; j++){
            arr[i][j] = false;
        }
    }
    int maxi = 0;
    int mini = 2001;
    int maxj = 0;
    int minj = 2001;
    int ch = 0;
    for (int i = ax1; i < ax2; i++){
        for (int j = ay1; j < ay2; j++){
            if(arr[i][j] == true){
                if (maxi < i) maxi = i;
                if (mini > i) mini = i;
                if (maxj < j) maxj = j;
                if (minj > j) minj = j;
                ch = 1;
            }
        }
    }
    if (ch) cout << (maxi-mini+1) * (maxj-minj+1);
    else cout << 0;
    return 0;
}