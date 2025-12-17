#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<int> s(T);
    for (int i = 0; i < T; i++) {
        int t_m = 0;
        for (int j = 0; j < 4; j++) {
            int s;
            cin >> s;
            t_m += s;
        }
        s[i] = t_m;
    }

    int t_s = s[0];
    sort(s.rbegin(), s.rend());

    int rank = 1;
    for (int score : s) {
        if (score == t_s) break;
        rank++;
    }

    cout << rank << endl;

    return 0;
}
