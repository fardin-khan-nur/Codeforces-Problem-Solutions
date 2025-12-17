#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char c = 'a';
    int t_r = 0;

    for (int i = 0; i < s.length(); i++) {
        int d = abs(s[i] - c);
        t_r += min(d, 26 - d);
        c = s[i];
    }

    cout << t_r << endl;
    return 0;
}
