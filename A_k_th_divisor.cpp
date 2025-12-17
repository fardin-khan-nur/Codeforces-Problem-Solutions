#include <iostream>
using namespace std;
#define ll long long

int kD(ll n, ll k) {
    int count = 0;
    for (ll i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (count == k) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    ll n, k;
    cin >> n >> k;
    cout << kD(n, k) << endl;
    return 0;
}
