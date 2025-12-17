#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        int ans = s.size();
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                ans = 1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
