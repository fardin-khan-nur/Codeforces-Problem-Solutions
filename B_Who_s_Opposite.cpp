#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int n = 2 * abs(a - b);

        if (a > n || b > n || c > n) {
            cout << "-1" << endl;
            continue;
        }

        int d1 = c + n / 2;
        int d2 = c - n / 2;

        if (1 <= d1 && d1 <= n)
            cout << d1 << endl;
        else if (1 <= d2 && d2 <= n)
            cout << d2 << endl;
        else
            cout << "-1" << endl;
    }
    
    return 0;
}
