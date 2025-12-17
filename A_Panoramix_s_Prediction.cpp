#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int c = 0;

    for (int i = n + 1; i <= m; i++)\
    {
        int P = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0) {
                P = 0;
                break;
            }
        }
        if (P) {
            c = i;
            break;
        }
    }

    if (c == m) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
