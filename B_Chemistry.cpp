#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k, c = 0;
        cin >> n >> k;
        cin.ignore();

        string s;
        getline(cin, s);

        sort(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1]) i++;
            else c++;
        }
        c -= k;

        if (c > 1) cout << "NO" << endl;
        else cout<<"YES" << endl;
    }

    return 0;
}