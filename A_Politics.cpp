#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<bool> stay(n, true);
        vector<string> mem(n);

        for(int i = 0; i < n; i++) {
            cin >> mem[i];
        }

        for(int i = 1; i < n; i++) {
            for(int j = 0; j < k; j++) {
                if(mem[i][j] != mem[0][j]) {
                    stay[i] = false;
                }
            }
        }

        int res = 1;
        for(int i = 1; i < n; i++) {
            if(stay[i] == true) {
                res++;
            }
        }
        cout << res << endl;
    }
}