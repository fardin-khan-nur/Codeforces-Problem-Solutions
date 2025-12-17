#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, a, b;
        cin >> n >> a >> b;

        int cost_per_pair = min(b, 2 * a);
        int total_cost = (n / 2) * cost_per_pair + (n % 2) * a;
        cout << total_cost << endl;
    }

    return 0;
}
