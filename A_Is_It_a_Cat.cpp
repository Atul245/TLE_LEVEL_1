#include<bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;
    
    while(t--) {
        int n;
        string str;

        cin >> n;
        cin >> str;

        string temp;
        temp.push_back(tolower(str[0]));

        for(int i = 1; i<str.length(); i++) {
            if(tolower(str[i]) != tolower(str[i-1])) {
                temp.push_back(tolower(str[i]));
            }
        }

        if(temp == "meow") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}