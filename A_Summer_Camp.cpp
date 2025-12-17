#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s = "";
    for (int i = 1; s.length() < n; i++) {
        s += to_string(i);
    }
    
    cout << s[n - 1] << endl;
    return 0;
}