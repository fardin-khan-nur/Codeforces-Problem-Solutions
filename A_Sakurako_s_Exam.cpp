#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;
        int sa=0, sb=0;
        for (int i = 1; i <= a; i++)
            sa += 1; 
        for (int i = 1; i <= b; i++)
            sb += 2;
        if( (sa - sb) <= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}