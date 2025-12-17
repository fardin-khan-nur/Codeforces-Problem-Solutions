#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string m;
    int c = 0, p = 0, g = 0, b = 0, o = 0, r = 0, y = 0;

    while (n--) {
        cin >> m;
        if (m[0] == 'p') p++;
        else if (m[0] == 'g') g++;
        else if (m[0] == 'b') b++;
        else if (m[0] == 'o') o++;
        else if (m[0] == 'r') r++;
        else if (m[0] == 'y') y++;
    }
    cout << 6-(p+g+b+o+r+y) << endl;
    if(p == 0) cout << "Power" << endl;
    if(g == 0) cout << "Time" << endl;
    if(b == 0) cout << "Space" << endl;
    if(o == 0) cout << "Soul" << endl;
    if(r == 0) cout << "Reality" << endl;
    if(y == 0) cout << "Mind" << endl;

    return 0;
}



