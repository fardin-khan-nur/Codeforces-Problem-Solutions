//!TEST
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, c, t1=0, p1=0, t2=0, p2=0;
//     cin >> n >> c;
//     int p[n], t[n];
//     for (int i = 0; i < n; i++) cin >> p[i];
//     for (int i = 0; i < n; i++) cin >> t[i];
//     for (int i = 0; i < n; i++) {
//         t1 += t[i];
//         p1 += p[i] - t1*c;
//     }
//     for (int i = n-1; i >= 0; i--) {
//         t2 += t[i];
//         p2 += p[i] - t2*c;
//     }
//     cout << p1 << endl;
//     cout << p2 << endl;
    
//     return 0;
// }

//todo: Solve

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    
    vector<int> p(n), t(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    int t1 = 0, p1 = 0, t2 = 0, p2 = 0;

    for (int i = 0; i < n; i++) {
        t1 += t[i];
        p1 += max(0, p[i] - t1 * c);
    }

    for (int i = n - 1; i >= 0; i--) {
        t2 += t[i];
        p2 += max(0, p[i] - t2 * c);
    }

    if (p1 > p2) cout << "Limak" << endl;
    else if (p1 < p2) cout << "Radewoosh" << endl;
    else cout << "Tie" << endl;

    return 0;
}