#include <iostream>
using namespace std;

bool arr[2001][2001] = {0};
void paint1(int x1, int y1, int x2, int y2){
    for (int i = x1; i < x2; i++){
        for (int j = y1; j < y2; j++){
            arr[i][j] = true;
        }
    }
}
void paint2(int x1, int y1, int x2, int y2){
    for (int i = x1; i < x2; i++){
        for (int j = y1; j < y2; j++){
            arr[i][j] = false;
        }
    }
}
int main() {
    // Please write your code here.
    int x1, y1, x2, y2;
    int offset = 1000;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += offset;
    y1 += offset;
    x2 += offset;
    y2 += offset;
    paint1(x1, y1, x2, y2);
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += offset;
    y1 += offset;
    x2 += offset;
    y2 += offset;
    paint1(x1, y1, x2, y2);
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += offset;
    y1 += offset;
    x2 += offset;
    y2 += offset;
    paint2(x1, y1, x2, y2);
    int area = 0;
    for (int i = 0; i < 2001; i++){
        for (int j = 0; j < 2001; j++){
            if (arr[i][j] == true) area++;
        }
    }
    cout << area;
    return 0;
}