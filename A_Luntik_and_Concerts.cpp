#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        cout << (a + c) % 2 << '\n';
    }
    
    return 0;
}
