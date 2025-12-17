#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long a = 0, b = 1e10;
    int n;
    cin >> n;
    for (int num = 0; num < n; ++num) {
        long long x, y;
        cin >> x >> y;
        b = min(y, b);
        a += x * b;
    }
    cout << a << endl;
    return 0;
}
