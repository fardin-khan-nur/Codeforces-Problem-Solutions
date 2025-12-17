#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int n;
        cin >> n;

        for (int i = 0; i < 2 * n; i++) {
            for (int j = 0; j < 2 * n; j++) {
                cout << ((i / 2 + j / 2) & 1 ? '.' : '#');
            }
            cout << '\n';
        }
    }

    return 0;
}
