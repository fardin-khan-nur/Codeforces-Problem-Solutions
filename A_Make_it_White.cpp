#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int n; 
        cin >> n;

        string s; 
        cin >> s;

        int l, r;
        bool lf = true, rf = true;

        for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
            if (s[i] == 'B' && lf) {
                l = i;
                lf = false;
            }

            if (s[j] == 'B' && rf) {
                r = j;
                rf = false;
            }

            if (!lf && !rf) {
                break;
            }
        }
        cout << (r - l) + 1 << endl;
    }

    return 0;
}
