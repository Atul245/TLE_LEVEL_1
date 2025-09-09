#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;

    int cnt_u = 0, cnt_l = 0;
    for(int i = 0; i < str.length(); i++) {
        if(int(str[i]) >= 65 && int(str[i] <= 90)) {
            cnt_u++;
        } else {
            cnt_l++;
        }
    }

    if(cnt_u > cnt_l) {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str;
    } else {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str;
    }

}