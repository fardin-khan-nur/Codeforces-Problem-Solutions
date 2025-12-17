#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int a[n];
        for(auto &x:a) cin >> x;
        if(a[0] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}