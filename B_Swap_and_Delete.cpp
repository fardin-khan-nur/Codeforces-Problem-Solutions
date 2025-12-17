#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        int x = count(a.begin(), a.end(), '1');
        int y = count(a.begin(), a.end(), '0');
        
        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] == '0')
            {
                if(x == 0) break;
                x--;
            }
            else
            {
                if(y == 0) break;
                y--;
            }
        }
        cout << max(x, y) << endl;
    }
    return 0;
}
