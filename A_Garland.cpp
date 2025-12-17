#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        vector<int> freq(10, 0);
        for (char c : s) freq[c - '0']++;
        int maxFreq = *max_element(freq.begin(), freq.end());
        cout << (maxFreq == 4 ? -1 : (maxFreq == 3 ? 6 : 4)) << endl;
    }
}
