#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        sort(a.begin(), a.end());
        int r = 0;
        for (int i = 0; i < n / 2; ++i) {
            r += a[n - i - 1] - a[i];
        }
        cout << r << endl;
    }
    
    return 0;
}