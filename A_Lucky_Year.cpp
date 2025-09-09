#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long b;
    long long a = 1;

    while( a <= n) {
        a = a*10;
    }

    a = a/10;
    b = a;
    
    while(b <= n) {
        b = b + a;
    }

    cout << (b - n);
}