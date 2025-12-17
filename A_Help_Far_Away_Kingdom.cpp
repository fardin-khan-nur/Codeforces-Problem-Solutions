#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int i = 0;
    while (s[i] != '.') i++;
    
    int lD = s[i - 1] - '0';
    int ffD = s[i + 1] - '0';
    
    if (lD == 9) {
        cout << "GOTO Vasilisa." << endl;
    }
    else {
        if (ffD >= 5) {
            lD++;
        }
        for (int j = 0; j < i - 1; j++) {
            cout << s[j];
        }
        cout << lD << endl;
    }
    return 0;
}
