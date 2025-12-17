#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    cin >> n;
    for (int i = 1;; i++) {
        p = (n * i) + 1;
        bool isPrime = true;

        for (int j = 2; j <= sqrt(p); j++) {
            if (p % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (!isPrime) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
