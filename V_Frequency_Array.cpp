#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
    cin >> n >> m;

    unordered_map<int, int> f;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        f[x]++;
    }

    for (int i = 1; i <= m; i++)
        cout << f[i] << endl;

    return 0;
}