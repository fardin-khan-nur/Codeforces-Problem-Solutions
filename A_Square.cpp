#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<vector<int>> a(4, vector<int>(2));
        for (int i = 0; i < 4; i++) {
            cin >> a[i][0] >> a[i][1];
        }
        int xmin = min({a[0][0], a[1][0], a[2][0], a[3][0]});
        int xmax = max({a[0][0], a[1][0], a[2][0], a[3][0]});
        int dx = xmax - xmin;
        cout << dx * dx << endl;
    }
    
    return 0;
}