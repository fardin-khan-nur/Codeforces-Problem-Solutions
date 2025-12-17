#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        int m = 0;
        while (n != 1) {
            if (n % 2 == 0) n /= 2;
            else if (n % 3 == 0) n = 2 * n / 3;
            else if (n % 5 == 0) n = 4 * n / 5;
            else {
                m = -1;
                break;
            }
            m++;
        }
        cout << m << endl;
    }
    return 0;
}
