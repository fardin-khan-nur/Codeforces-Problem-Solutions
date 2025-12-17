#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;

        int pen_n = (a + c - 1) / c;
        int pencil_n = (b + d - 1) / d;

        if (pen_n + pencil_n <= k) cout << pen_n << " " << pencil_n << endl;
        else cout << "-1" << endl;
    }
    
    return 0;
}
