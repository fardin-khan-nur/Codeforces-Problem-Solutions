#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long u, v;
        cin >> u >> v;
        cout << fixed << setprecision(0) << -pow(u, 2) << " " << pow(v, 2) << endl;
    }

    return 0;
}
