#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, d, e;
        cin >> a >> b >> d >> e;

        int ans = 0;
        for (int c = -200; c <= 200; c++) {
            ans = max(ans, (c == a+b) + (d == b+c) + (e == c+d));
        }
        cout << ans << endl;
    }
    
    return 0;
}