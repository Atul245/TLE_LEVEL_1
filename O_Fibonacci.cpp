#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    if(t == 1) {
        cout << 0 << endl;
        return 0;
    }
    if(t == 2) {
        cout << 1 << endl;
        return 0;
    }

    long long prev1 = 0, prev2 = 1, next;
    for(int i = 3; i <= t; i++) {
        next = prev1 + prev2;
        prev1 = prev2;
        prev2 = next;
    }
        cout << next << endl;
        return 0;
}