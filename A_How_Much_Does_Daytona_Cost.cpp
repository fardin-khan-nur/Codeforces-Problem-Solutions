#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k, c=0;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++) {
            if(a[i] == k) c++;
        }
        if(c != 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}