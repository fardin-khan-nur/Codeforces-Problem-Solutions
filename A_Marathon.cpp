#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int m=a,cP=0;
        if(m<b) cP++;
        if(m<c) cP++;
        if(m<d) cP++;
        cout << cP << endl;
    }

    return 0;
}
