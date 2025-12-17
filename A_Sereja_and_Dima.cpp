#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int s = 0, d = 0;
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    sort(c.begin(), c.end(), greater<int>());

    for (int i = 0; i < n; i += 2) s += c[i];
    for (int i = 1; i < n; i += 2) d += c[i];

    cout << s << " " << d << endl;
    return 0;
}

//! BELOW Correct
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    int l = 0, r = n - 1, s = 0, d = 0, t = 0;

    while (l <= r) {
        if (c[l] >= c[r]) {
            if (t % 2 == 0) s += c[l];
            else d += c[l];
            l++;
        }
        else {
            if (t % 2 == 0) s += c[r];
            else d += c[r];
            r--;
        }
        t++;
    }

    cout << s << " " << d << endl;
    return 0;
}
