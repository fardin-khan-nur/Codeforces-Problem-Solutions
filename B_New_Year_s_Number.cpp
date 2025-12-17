#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int n; cin >> n;
        int cnt = n / 2020;
        int rem = n % 2020;

        if (rem <= cnt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}