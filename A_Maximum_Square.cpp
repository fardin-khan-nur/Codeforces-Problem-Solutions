#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, s = 0;
        cin >> n;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            s = max(s, min(i, a));
        }
        cout << s << endl;
    }
    
    return 0;
}
