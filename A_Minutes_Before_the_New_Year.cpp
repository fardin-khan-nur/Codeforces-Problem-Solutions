#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int h,m;
        cin >> h >> m;
        int mh= 1440 - ((h*60)+m);
        cout << mh << endl;
    }
    return 0;
}
