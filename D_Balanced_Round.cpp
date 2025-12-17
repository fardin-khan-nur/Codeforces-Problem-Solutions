#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k, c = 0;
        cin >> n >> k;
        vector<int> d(n);
        for (int i = 0; i < n; i++) cin >> d[i];
        sort(d.begin(), d.end());
        for (int i = 1; i < n; i++) {
            if (abs(d[i] - d[i-1]) > k) c++;
        }
        cout << c << endl;
    }

    return 0;
}
