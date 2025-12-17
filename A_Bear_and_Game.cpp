#include <bits/stdc++.h>
using namespace std;

int t[105];

int main() {
    int n;
    cin >> n;

    t[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> t[i];

    t[n + 1] = 91;

    for (int i = 1; i <= n + 1; i++) {
        if (t[i] > t[i - 1] + 15) {
            cout << t[i - 1] + 15 << endl;
            return 0;
        }
    }

    cout << 90 << endl;
    return 0;
}
