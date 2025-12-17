#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        cout << ((a+c>=x and c+b>=y and a+b+c>=x+y) ? "YES":"NO") << endl;
    }
    
    return 0;
}