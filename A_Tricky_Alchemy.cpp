#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long x, y, z;
    cin >> x >> y >> z;

    long long r_y = (x * 2) + (y * 1);
    long long r_b = (y * 1) + (z * 3);

    long long e_y = max(0LL, r_y - a);
    long long e_b = max(0LL, r_b - b);

    cout << e_y + e_b << endl;

    return 0;
}