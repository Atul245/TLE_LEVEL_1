#include<bits/stdc++.h>

using namespace std;

int main() {
     int n;
     cin >> n;

     while(n--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if((a < c && c < b)  xor (a < d && d < b)) {
            cout << "YES" << endl;
        } else if ((a > c && c > b)  xor (a > d && d > b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
     }
}