#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        int tiles[2][2];

        while(n--) {
            cin >> tiles[0][0] >> tiles[0][1];
            cin >> tiles[1][0] >> tiles[1][1];
        }
        if(m % 2 == 0 && tiles[0][1] == tiles[1][0]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}