#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;
        long long total = a + b + c + n;
        long long max_coins = max({a, b, c});
        
        if (total % 3 == 0 && max_coins <= total / 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
