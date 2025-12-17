#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x, c = 0;
    cin >> n >> x;
    
    while (n--) {
        char op; long long p;
        cin >> op >> p;
        if (op == '+') {
            x += p;
        }
        else {
            if (x >= p) x -= p;
            else c++;
        }
    }
    
    cout << x << " " << c << endl;
    return 0;
}