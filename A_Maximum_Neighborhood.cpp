#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int a = 1;
        if( n==2 ) a = 9;
        else if(n==3 || n==4 ) a = 4 * n * n - n - 4;
        else if( n > 4 ) a = 5 * n * n - 5 * n - 5;
        cout << a << endl;
    }
    
    return 0;
}