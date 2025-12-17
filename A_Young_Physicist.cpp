// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T, s = 0;
//     cin >> T;

//     while (T--) {
//         int x, y, z;
//         cin >> x >> y >> z;
//         s += x + y + z;
//     }
//     if(s == 0) cout << "YES" << endl;
//     else cout << "NO" << endl;
//     return 0;
// }

//! BELOW Correct
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sX = 0, sY = 0, sZ = 0;
    
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        sX += x;
        sY += y;
        sZ += z;
    }
    
    if (sX == 0 && sY == 0 && sZ == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}