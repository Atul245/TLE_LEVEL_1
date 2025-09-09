#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    int arr[t];
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    int even = 0, odd = 0, positive = 0, negative = 0;
    
    for(int i = 0; i < t; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        }
        if(arr[i] % 2 != 0) {
            odd++;
        }
        if(arr[i] > 0) {
            positive++;
        }
        if(arr[i] < 0) {
            negative++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl; 
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}