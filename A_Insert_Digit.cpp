#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, d;
        cin >> n >> d;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool done = false;

        for (int i = 0; i < n; i++) {
            if (a[i] < d) {
                for (int j = 0; j < i; j++)
                    cout << a[j];
                cout << d;
                for (int j = i; j < n; j++)
                    cout << a[j];
                cout << '\n';
                done = true;
                break;
            }
        }

        if (!done) {
            for (int i = 0; i < n; i++)
                cout << a[i];
            cout << d << '\n';
        }
    }
    return 0;
}
