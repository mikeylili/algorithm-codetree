#include <iostream>

using namespace std;

int n;
int arr[20];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++){
            for (int k = j+1; k < n; k++){
                    int tnum = 100000;
                    int ch = 0;
                    while (tnum > 1){
                        int in = (arr[i]%tnum)/(tnum/10);
                        int jn = (arr[j]%tnum)/(tnum/10);
                        int kn = (arr[k]%tnum)/(tnum/10);
                        if (in+jn+kn >= 10){
                            ch = 1;
                            break;
                        }
                        tnum /= 10;
                    }
                    if (ch == 0 && max < arr[i] + arr[j] + arr[k]) max = arr[i] + arr[j] + arr[k];
                
            }
        }
    }
    if (max == 0) max = -1;
    cout << max;
    // Please write your code here.

    return 0;
}