#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        long long p, a, b, c;
        cin >> p >> a >> b >> c;

        long long wait_a = (p % a == 0) ? 0 : a - (p % a);
        long long wait_b = (p % b == 0) ? 0 : b - (p % b);
        long long wait_c = (p % c == 0) ? 0 : c - (p % c);

        long long result = min({wait_a, wait_b, wait_c});
        cout << result << endl;
    }
    
    return 0;
}
