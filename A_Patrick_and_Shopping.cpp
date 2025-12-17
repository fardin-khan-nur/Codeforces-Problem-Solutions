#include <bits/stdc++.h>
using namespace std;

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    long long r1 = d1 + d2 + d3;
    long long r2 = d1 + d2 + d3 * 2;
    long long r3 = 2 * (d1 + d2);
    long long r4 = 2 * (d1 + d3);
    long long r5 = 2 * (d2 + d3);

    cout << min({r1, r2, r3, r4, r5}) << endl;

    return 0;
}