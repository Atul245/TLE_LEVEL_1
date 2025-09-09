#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    for(int i =0; i < t; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(str[j] == 'B' && str[j + 1] == 'G') {
                swap(str[j], str[j + 1]);
                j++;
            }
        }
    }

    cout << str << endl;
}

// Pattern print : https://www.hackerearth.com/problem/golf/print-the-pattern/


// int main() {
//     int n;
//     cin >> n;

//     bool flg = false;
//     int cnt = 1;

//     for(int i = 1; i <= n; i++) {
//         if(flg) {
//             for(int j = 1; j <= i ; j++) {
//                 cout << cnt << " ";
//                 cnt++;
//             }
//             flg = false;
//         } else {
//             int new_cnt = cnt + i - 1;
//             for(int j = 0; j < i; j++){
//                 cout << new_cnt - j << " ";
//         }
//             cnt += i;
//             flg = true;
//     }
//         cout << endl;
//     }
// }