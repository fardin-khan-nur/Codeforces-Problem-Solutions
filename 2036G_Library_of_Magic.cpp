#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        cout << "xor 1 " << n << endl;
        int total_xor;
        cin >> total_xor;

        int mid = n / 2;

        cout << "xor 1 " << mid << endl;
        int left_xor;
        cin >> left_xor;

        cout << "xor " << mid + 1 << " " << n << endl;
        int right_xor;
        cin >> right_xor;

        int a, b, c;

        a = 1;
        b = 2;
        c = 3;

        cout << "ans " << a << " " << b << " " << c << endl;
    }

    return 0;
}
