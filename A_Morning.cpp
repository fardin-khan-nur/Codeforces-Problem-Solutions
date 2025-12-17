#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string p;
        cin >> p;
        int t = 0, ps = 1;

        for (char dt : p) {
            int d = dt - '0';
            t += abs(d - ps) + 1;
            ps = d;
        }
        cout << t << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string p;
        cin >> p;
        int t = 4 + abs(p[0] - '1');
        for (int i = 1; i < 4; ++i) {
            t += abs(p[i] - p[i - 1]);
        }
        cout << t << endl;
    }

    return 0;
}