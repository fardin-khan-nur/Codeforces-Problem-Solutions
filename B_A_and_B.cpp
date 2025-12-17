#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long d = abs(a - b);
        long long s = 0, k = 0;

        while (s < d || (s - d) % 2 != 0) {
            k++;
            s += k;
        }

        cout << k << endl;
    }

    return 0;
}
