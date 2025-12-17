#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int c = 1, mC = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            c++;
            mC = max(mC, c);
        }
        else {
            c = 1;
        }
    }
    
    if (mC >= 7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
