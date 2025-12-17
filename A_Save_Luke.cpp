#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    double d, l, v1, v2;
    cin >> d >> l >> v1 >> v2;
    cout << fixed << setprecision(20) << (l-d)/(v1+v2);
    
    return 0;
}