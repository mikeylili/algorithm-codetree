#include <iostream>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+2; j < n; j++){
            if (max < numbers[i] + numbers[j]) max = numbers[i] + numbers[j];
        }
    }
    cout << max;

    // Please write your code here.

    return 0;
}