#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 2; i < t; i++) {
        if(t % i == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}

/* Pattern print Z */

// int main() {
//     int t;
//     cin >> t;

//     for(int i = 0; i < t; i++) {
//         for(int j = 0; j < t; j++) {
//             if( i > 0 && i < t - 1 && i + j < t -1 ) {
//                 cout << "*";
//             } else {
//                 cout << "";
//             }
//         }
//     }
// }