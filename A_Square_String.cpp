#include <bits/stdc++.h>
using namespace std;

bool isSpecial(string s) {
    int n = s.length();
    if (n % 2 == 1) return false;
    string half = s.substr(0, n / 2);
    if (s == half + half) return true;
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string q;
        cin >> q;
        if (isSpecial(q)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
