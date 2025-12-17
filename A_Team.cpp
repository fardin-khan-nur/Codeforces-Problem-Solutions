#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    int p, v, t;
    int c = 0;

    while (T--) {
        cin >> p >> v >> t;
        if ((p + v + t) >= 2) c++;
    }
    cout << c << endl;
    return 0;
}
