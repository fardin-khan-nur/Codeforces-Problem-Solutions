#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        int d = abs(b - a);
        int p = 0;

        p += d / 5;
        d %= 5;

        p += d / 2;
        d %= 2;

        p += d / 1;
        d %= 1;

        cout << p << endl;
    }
    return 0;
}
