#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int f = n * a;
    int s = (n / m) * b + min((n % m) * a, b);
    cout << min(f, s) << endl;
    return 0;
}
