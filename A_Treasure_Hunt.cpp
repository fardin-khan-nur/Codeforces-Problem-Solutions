#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int x=0, y=0, a;
        cin >> x >> y >> a;
        
        if (a % (x + y) < x)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    
    return 0;
}