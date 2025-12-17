#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int c0 = 0, c1 = 0;
        for (char c : s) {
            if (c == '0') c0++;
            else c1++;
        }

        if (c0 == c1 && n > 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
