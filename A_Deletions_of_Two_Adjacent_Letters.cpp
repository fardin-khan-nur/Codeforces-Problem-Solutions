#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string s;
        char c;
        cin >> s >> c;
        
        bool p = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c && i % 2 == 0) {
                p = true;
                break;
            }
        }
        
        cout << (p ? "YES" : "NO") << endl;
    }
    return 0;
}
