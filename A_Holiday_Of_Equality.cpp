#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<int> e(n);
    int m = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> e[i];
        s += e[i];
        if (m < e[i]) m = e[i];
    }
    cout << (m * n) - s << endl;
    return 0;
}
