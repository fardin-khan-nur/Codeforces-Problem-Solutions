#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int n, c=1;
        cin >> n;
        cin.ignore();
        string a,b;
        getline(cin, a); getline(cin, b);
        for (int i = 0; i < n; i++) if(a[i] == b[i]) c++;
        if(c%2==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}
