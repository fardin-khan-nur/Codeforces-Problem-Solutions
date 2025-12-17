#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    ll t_f_1 = 2 * t1 + s * v1;
    ll t_f_2 = 2 * t2 + s * v2;
    
    if (t_f_1 < t_f_2) cout << "First" << endl;
    else if (t_f_1 > t_f_2) cout << "Second" << endl;
    else cout << "Friendship" << endl;
    
    return 0;
}