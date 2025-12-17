#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,mM = 0,mC = 0;
    cin >> T;

    while (T--)
    {
        int m,c;
        cin >> m >> c;
        if(m > c) mM++;
        else if (m < c) mC++;
    }
    if(mM > mC) cout << "Mishka" << endl;
    else if (mM < mC) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}
