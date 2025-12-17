#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        unordered_set<char> solve;
        int b = 0;

        for (char c : s) {
            if (solve.find(c) == solve.end()) {
                b += 2;
                solve.insert(c);
            }
            else b += 1;
        }

        cout << b << endl;
    }
    return 0;
}
