#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n, k;
    cin >> n >> k;
    ll x = n-k;
    if(x % 2 != 0 || x == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    // for (ll i = 1; i <= n; i++)
    // {
        
    // }
    
    return 0;
}
// Below Accept
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;
    
    if ((n / k) % 2 == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}