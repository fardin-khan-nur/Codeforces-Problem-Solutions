#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> flag(n);
    
    for (int i = 0; i < n; i++) {
        cin >> flag[i];
    }
    
    bool valid = true;
    
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (flag[i][j] != flag[i][0]) {
                valid = false;
                break;
            }
        }
        if (i > 0 && flag[i][0] == flag[i-1][0]) {
            valid = false;
            break;
        }
    }
    
    cout << (valid ? "YES" : "NO") << endl;
    return 0;
}
