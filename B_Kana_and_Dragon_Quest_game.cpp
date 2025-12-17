#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int x, n, m;
        cin >> x >> n >> m;

        while (n > 0 && x > 20) {
            x = x / 2 + 10;
            n--;
        }

        if (x - (m * 10) <= 0) cout << "YES" << endl;
        else cout << "NO" << endl; 
        } 
    
    return 0;
}