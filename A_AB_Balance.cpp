#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (s.size() > 1 && s[0] != s.back())
            s[0] = s.back();

        cout << s << '\n';
    }
    return 0;
}
