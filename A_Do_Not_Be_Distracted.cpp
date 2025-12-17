#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        string s, x;
        cin >> s;
        cin.ignore();

        int idx = 0;
        x[idx++] = s[0];
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                x[idx++] = s[i];
            }
        }

        int c = 1;
        for (int i = 0; i < idx; i++) {
            for (int j = i + 1; j < idx; j++) {
                if (x[i] == x[j]) {
                    c = 0;
                    break;
                }
            }
            if (c == 0) break;
        }

        if (c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}