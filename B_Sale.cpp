#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    int s = 0;
    for (int i = 0; i < m && a[i] < 0; i++) {
        s += abs(a[i]);
    }
    
    cout << s << endl;
    return 0;
}
