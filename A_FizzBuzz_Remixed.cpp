#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, ans;
        cin >> n;
        ans = 3 * (n / 15);
        n %= 15;
        for (int j = 0; j <= n; ++j) {
            if (j % 3 == j % 5) ++ans;
        }
        cout << ans << endl;
    }
    
    return 0;
}