#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, s=0;
        cin >> n;
        while(n > 0) {
            s += n;
            n /= 2;
        }
        cout << s << endl;
    }
    //
    
    return 0;
}
