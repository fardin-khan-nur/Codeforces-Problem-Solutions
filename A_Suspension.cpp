#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, y, r;
        cin >> n;
        cin >> y >> r;
        cout << min( n, r+y/2 ) << endl;
    }
    
    return 0;
}