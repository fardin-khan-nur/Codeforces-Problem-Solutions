#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, m, a;
    cin >> n >> m >> a;
    
    ll n_f = (ll)ceil((double) n / a) * (ll)ceil((double) m / a);
    cout << n_f << endl;

    return 0;
}
