#include <iostream>
using namespace std;

int arr[201][201] = {0};
int main() {
    // Please write your code here.
    int x1, x2, y1, y2;
    int N;
    cin >> N;
    int offset = 100;
    for (int i = 0; i < N; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += offset;
        y1 += offset;
        x2 += offset;
        y2 += offset;
        for (int j = x1; j < x2; j++){
            for (int k = y1; k < y2; k++) arr[k][j] = 1;
        }
    }
    int w = 0;
    for (int j = 0; j < 201; j++){
            for (int k = 0; k < 201; k++){
                if (arr[k][j]) w++;
            }
        }
        cout << w;
    return 0;
}