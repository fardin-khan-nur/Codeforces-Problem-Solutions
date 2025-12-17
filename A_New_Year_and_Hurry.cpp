#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, c = 0, t = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        t += 5 * i;
        if (t + k <= 240) c++;
        else break;
    }
    cout << c << endl;
    return 0;
}
