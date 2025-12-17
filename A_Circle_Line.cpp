#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, t; 
    cin >> n;
    vector<int> d(n + 1);
    int t_d = 0, d_d = 0;

    for (int i = 1; i <= n; i++) {
        cin >> d[i];
        t_d += d[i];
    }

    cin >> s >> t;
    if (s > t) swap(s, t);

    for (int i = s; i < t; i++) d_d += d[i];

    cout << min( d_d , t_d - d_d ) << endl;

    return 0;
}
