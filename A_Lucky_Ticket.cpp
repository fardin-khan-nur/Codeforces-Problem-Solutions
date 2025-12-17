#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, f = 0, s = 0;
    string t;
    cin >> n >> t;

    for (int i = 0; i < n; ++i) {
        if (t[i] != '4' && t[i] != '7') {
            cout << "NO" << endl;
            return 0;
        }
        if (i < n / 2) f += t[i] - '0';
        else s += t[i] - '0';
    }

    cout << (f == s ? "YES" : "NO") << endl;
    return 0;
}