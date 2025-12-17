#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string s, t;
        cin >> s >> t;

        int lcp = 0;
        int n = s.length();
        int m = t.length();

        for (int i = 1; i <= min(n, m); i++) {
            if (s.substr(0, i) == t.substr(0, i))
                lcp = i;
        }

        cout << n + m - max(lcp, 1) + 1 << endl;
    }
    
    return 0;
}
