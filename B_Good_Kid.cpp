#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, ans = 1;
        cin >> n;
        vector <int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(),a.end());
        a[0]++;

        for (int i = 0; i < n; i++)
            ans *= a[i];

        cout << ans << endl;
    }
    
    return 0;
}