#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, pr = 0, pR = 0, pg = 0, pG = 0, pb = 0, pB = 0;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'r') pr = i + 1;
            if (s[i] == 'g') pg = i + 1;
            if (s[i] == 'b') pb = i + 1;
            if (s[i] == 'R') pR = i + 1;
            if (s[i] == 'G') pG = i + 1;
            if (s[i] == 'B') pB = i + 1;
        }
        int count = 0;
        if (pr < pR) count++;
        if (pg < pG) count++;
        if (pb < pB) count++;

        if (count == 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
    //! All Ok
    
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, pr = 0, pR = 0, pg = 0, pG = 0, pb = 0, pB = 0;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'r') pr = i + 1;
            if (s[i] == 'g') pg = i + 1;
            if (s[i] == 'b') pb = i + 1;
            if (s[i] == 'R') pR = i + 1;
            if (s[i] == 'G') pG = i + 1;
            if (s[i] == 'B') pB = i + 1;
        }
        if (pr < pR && pg < pG && pb < pB) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

    //? ALL ok

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        map<char, int> pos;
        for (int i = 0; i < s.length(); i++) pos[s[i]] = i + 1;

        if (pos['r'] < pos['R'] && pos['g'] < pos['G'] && pos['b'] < pos['B']) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
