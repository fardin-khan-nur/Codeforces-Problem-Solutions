#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int wI = -1, mQ = -1;
        for (int i = 1; i <= n; i++) {
            int a, b;
            cin >> a >> b;
            if (a <= 10 && b > mQ) {
                mQ = b;
                wI = i;
            }
        }
        cout << wI << endl;
    }
    return 0;
}
