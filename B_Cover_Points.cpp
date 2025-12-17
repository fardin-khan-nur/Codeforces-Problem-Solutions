#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, x, y, ans = 0;
    cin >> T;
    
    while (T--) {
        cin >> x >> y;
        ans = max(ans, x + y);
    }
    
    cout << ans << endl;
    return 0;
}
