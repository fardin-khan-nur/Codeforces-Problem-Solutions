#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, d = 1;
        cin >> n;
        vector<int> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end(), greater<int>());

        for (int i = 0; i < n; i++) c[i] = a[i] + b[i];

        sort(c.begin(), c.end());

        for (int i = 1; i < n; i++) {
            if (c[i] != c[i - 1]) d++;
        }

        if (d >= 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        sort(a.rbegin(), a.rend());

        for (int i = 0; i < n; i++) c[i] = a[i] + b[i];

        sort(c.begin(), c.end());

        int d = unique(c.begin(), c.end()) - c.begin();

        cout << (d >= 3 ? "YES" : "NO") << '\n';
    }

    return 0;
}
