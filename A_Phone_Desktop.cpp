#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, y;
        cin >> x >> y;

        int s = (y + 1) / 2;

        int f = (y / 2) * 7;
        if (y % 2 == 1) f += 11;

        x -= f;
        if (x > 0)
            s += (x + 14) / 15;

        cout << s << '\n';
    }
    return 0;
}
