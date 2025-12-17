#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        bool v = (n % 3 != 2);
        for (int i = 0; i < n / 3; i++) {
            if (s[i * 3 + 1] != s[i * 3 + 2]) {
                v = false;
                break;
            }
        }

        cout << (v ? "YES" : "NO") << endl;
    }
    
    return 0;
}