#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;

        int s1 = max(2 * min(a, b), max(a, b)); 
        int s2 = max(a + b, max(a, b)); 

        cout << min(s1 * s1, s2 * s2) << endl;
    }
    
    return 0;
}