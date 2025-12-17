#include <iostream>
using namespace std;

int main() {
    int n, r = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int n = i;
        int c = 0;

        for (int j = 2; j * j <= n; j++) {
            if (n % j == 0) {
                c++;
                while (n % j == 0) {
                    n /= j;
                }
            }
        }

        if (n > 1) c++;
        if (c == 2) r++;
    }

    cout << r << endl;
    return 0;
}
