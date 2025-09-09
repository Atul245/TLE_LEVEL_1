#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long arr[n], b[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    bool same = true;

    sort(arr, arr + n);
    sort(b, b + n);
    for(int i = 0; i < n; i++) {
        if(arr[i] != b[i]) {
            same = false;
            break;
        }
    }
    cout<< (same ? "yes" : "no") << endl;
}