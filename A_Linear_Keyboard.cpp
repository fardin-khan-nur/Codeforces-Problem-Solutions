#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string k, s;
        cin >> k >> s;
        int res = 0;
        for (size_t i = 1; i < s.size(); i++) {
            int ans = k.find(s[i]) - k.find(s[i - 1]);
            res += abs(ans);
        }
        cout << res << endl;
    }
    
    return 0;
}