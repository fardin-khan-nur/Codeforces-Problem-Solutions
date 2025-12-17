#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int l_o = 0, r_o = 0;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if (l == 1) l_o++;
        if (r == 1) r_o++;
    }
    int l_c = n - l_o;
    int r_c = n - r_o;

    cout << min(l_o, l_c) + min(r_o, r_c) << endl;

    return 0;
}
