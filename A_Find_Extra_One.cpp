#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, l = 0, r = 0, x, y;
    cin >> T;
    while (T--) {
        cin >> x >> y;
        if (x > 0) r++;
        else l++;
    }
    
    if (l <= 1 || r <= 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
