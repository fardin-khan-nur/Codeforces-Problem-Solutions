#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long r, b, d;
        cin >> r >> b >> d;
        
        if (r > b) swap(r, b);
        
        if (b <= r * (d + 1)) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}
