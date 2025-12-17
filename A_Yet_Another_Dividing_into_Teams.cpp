#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        int q[n];
        for (int i = 0; i < n; i++)
        {
            cin >> q[i];
        }
        if(n==1) cout << n << endl;
        else cout << n/2 << endl;
    }
    
    return 0;
}
