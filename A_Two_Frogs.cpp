#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int a_m = abs(a - b);
        if (a_m % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}