#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    int arr[t];
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < t; i++) {
        sum += arr[i];
    }
    if(sum == 0) {
        cout << "EASY" << endl;
    } else {
        cout << "HARD" << endl;
    }
}