#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, r = 0, maxR = 0;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;
        r = (r - a) + b;
        maxR = max(maxR, r);
    }

    cout << maxR << endl;
    return 0;
}
