#include <bits/stdc++.h>
using namespace std;

int cV(const string &s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
    }
    return count;
}

int main() {
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    if (cV(s1) == 5 && cV(s2) == 7 && cV(s3) == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
