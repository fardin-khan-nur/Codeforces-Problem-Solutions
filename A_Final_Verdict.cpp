#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k, s = 0, x;
        cin >> n >> k;
        
        for (int i = 0; i < n; i++) {
            cin >> x;
            s += x;
        }
        
        if (s == k * n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}