#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int arr[101];
    cin >> N;
    for (int i =0; i < N; i++){
        int n;
        cin >> n;
        arr[i] = n;
        if (!(i % 2)) {sort(arr, arr+i+1); cout << arr[i/2] << " ";}
    }
    return 0;
}