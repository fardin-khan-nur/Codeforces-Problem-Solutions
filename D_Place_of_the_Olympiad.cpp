#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        int rm = (k + n-1) / n;
        int r0 = m - rm;

        int rg = r0 + 1;
        int ans = (rm + rg - 1) / rg;
        cout << ans << endl;
    }
    
    return 0;
}