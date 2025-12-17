#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, int> freq;
    for (char c : s1) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    for (char c : s2) {
        if (c != ' ') {
            if (freq[c] > 0)
            {
                freq[c]--;
            }
            else 
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
