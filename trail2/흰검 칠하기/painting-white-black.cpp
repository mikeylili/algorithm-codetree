#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    int w = 0, b = 0, g = 0;
    char tile[200002];
    int wntile[200002] = {0};
    int bntile[200002] = {0};
    int p = 100000;
    for (int i = 0; i < n; i++){
        if (dir[i] == 'L'){
            for (int j = 0; j < x[i]; j++){
                tile[p] = 'w';
                wntile[p] += 1;
                if (wntile[p] >= 2 && bntile[p] >= 2) tile[p] = 'g';
                p--;
            }
            p++;
        }
        if (dir[i] == 'R'){
            for (int j = 0; j < x[i]; j++){
                tile[p] = 'b';
                bntile[p] += 1;
                if (wntile[p] >= 2 && bntile[p] >= 2) tile[p] = 'g';
                p++;
            }
            p--;
        }
    }
    for (int i = 0; i < 200002; i++){
        if (tile[i] == 'w') w++;
        if (tile[i] == 'b') b++;
        if (tile[i] == 'g') g++;
    }
    cout << w <<" " << b << " " << g;

    return 0;
}