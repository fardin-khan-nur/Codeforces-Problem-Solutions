#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, s=0;
        cin >> n;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            s += x;
        }
        if(n == 1)
            cout << s << endl;
        else
            cout << s - (n - 1) << endl;
    }
    
    return 0;
}