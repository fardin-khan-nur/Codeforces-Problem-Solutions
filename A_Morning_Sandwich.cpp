#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int b, c, h;
        cin >> b >> c >> h;
        cout << (min(b-1,c+h)*2)+1 << endl;
    }
    return 0;
}
