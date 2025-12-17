#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int n,m,c=0;
        cin >> n >> m;
        int r[n];
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
            c+=r[i];
        }
        if(c==m) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}
