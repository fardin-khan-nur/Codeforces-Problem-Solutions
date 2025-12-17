// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int n, c = 0;
//         cin >> n;
//         vector<int> m(n);
        
//         for (int i = 0; i < n; i++) cin >> m[i];

//         for (int i = 1; i < n; i++) if (m[i] != m[i - 1]) c++;

//         cout << c << endl;
//     }
//     return 0;
// }


//! BELOW Correct
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        int l = 0;
        while (l < n && a[l] == 1) l++;
        l--;

        int r = n - 1;
        while (r >= 0 && a[r] == 1) r--;
        r++;

        if (l >= r) cout << 0 << endl;
        else cout << r - l << endl;
    }

    return 0;
}