#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int w, h, n;
        cin >> w >> h >> n;
        int r = 1;
        while (w % 2 == 0) {
            w /= 2;
            r *= 2;
        }
        while (h % 2 == 0) {
            h /= 2;
            r *= 2;
        }
    cout << (r >= n ? "YES\n" : "NO\n");  
    }
    
    return 0;
}