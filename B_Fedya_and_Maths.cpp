#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    if (n < 2) {
        n = 2;
        s += '0';
    }
    int x = stoi(s.substr(n - 2, 2));
    if (x % 4 == 0) cout << 4 << endl;
    else cout << 0 << endl;
    return 0;
}