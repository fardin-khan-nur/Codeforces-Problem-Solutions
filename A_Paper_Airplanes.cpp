#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, s, p;
    cin >> k >> n >> s >> p;

    int s_p_p = (n + s - 1) / s;
    int t_s = k * s_p_p;
    int p_n = (t_s + p - 1) / p;

    cout << p_n << endl;
    return 0;
}