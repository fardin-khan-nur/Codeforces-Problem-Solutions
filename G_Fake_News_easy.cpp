#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t = "heidi";
    cin >> s;
    
    int j = 0;  
    for (char c : s) {
        if (c == t[j]) j++;  
        if (j == t.size()) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}