#include <iostream>
#include <string>
using namespace std;

bool isBadString(const string& s) {
    int count = 0;
    for (char c : s) {
        if (c == ')') count++;
        else count = 0;
        if (count >= 2) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << (isBadString(s) ? "Yes" : "No") << endl;
    }
    return 0;
}
