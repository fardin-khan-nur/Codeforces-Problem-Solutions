#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    int c=0;

    while (T--)
    {
        string s;
        cin >> s;
        if(s == "Tetrahedron") c+=4;
        else if(s == "Cube") c+=6;
        else if(s == "Octahedron") c+=8;
        else if(s == "Dodecahedron") c+=12;
        else  c+=20;
    }
    cout << c << endl;
    return 0;
}
