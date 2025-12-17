#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        int l1 = abs(a - 1);
        int l2 = abs(c - b) + abs(c - 1);

        if (l1 < l2) 
            cout << 1 << endl;
        else if (l1 > l2) 
            cout << 2 << endl;
        else 
            cout << 3 << endl;
    }

    return 0;
}
