#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, c = 0;
    cin >> T;

    while (T--) {
        int b, a;
        string n;
        cin >> n >> b >> a;
        if (b >= 2400 && a > b)
        {
            c = 1;
            break;
        }
    }

    if (c) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
