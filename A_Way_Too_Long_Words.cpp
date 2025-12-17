#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string str;
        getline(cin, str);
        int len = str.length();

        if (len > 10) cout << str[0] << len - 2 << str[len - 1] << endl;
        else cout << str << endl;
    }
    return 0;
}