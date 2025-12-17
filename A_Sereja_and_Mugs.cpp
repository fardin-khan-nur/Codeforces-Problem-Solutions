#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> mugs(n);
    int total = 0, max_mug = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> mugs[i];
        total += mugs[i];
        max_mug = max(max_mug, mugs[i]);
    }

    if (total - max_mug <= s) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
