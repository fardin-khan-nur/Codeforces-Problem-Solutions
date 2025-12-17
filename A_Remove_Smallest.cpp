#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        bool p = true;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                p = false;
                break;
            }
        }
        cout << (p ? "YES" : "NO") << endl;
    }

    return 0;
}
