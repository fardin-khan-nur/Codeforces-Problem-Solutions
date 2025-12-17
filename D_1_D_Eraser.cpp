#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        int n, k, c = 0;
        cin >> n >> k;
        cin.ignore();
        string s;
        getline(cin, s);

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                c++;
                i += k - 1;
            }
        }
        cout << c << endl;
    }
    
    return 0;
}