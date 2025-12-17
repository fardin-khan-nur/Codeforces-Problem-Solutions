#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        string c;
        cin >> c;
        int cc=0;
        string o = "codeforces";
        if(c[0] != 'c') cc++;
        if(c[1] != 'o') cc++;
        if(c[2] != 'd') cc++;
        if(c[3] != 'e') cc++;
        if(c[4] != 'f') cc++;
        if(c[5] != 'o') cc++;
        if(c[6] != 'r') cc++;
        if(c[7] != 'c') cc++;
        if(c[8] != 'e') cc++;
        if(c[9] != 's') cc++;
        cout << cc << endl;
    }
    return 0;
}
// another way
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    const string target = "codeforces";
    while (T--) {
        string c;
        cin >> c;
        int cc = 0;
        for (int i = 0; i < 10; ++i)
            if (c[i] != target[i]) ++cc;
        cout << cc << endl;
    }
    return 0;
}
