#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int aC = 0, bC = 0;
        string word;
        cin >> word;
        int len = word.length();
        for (int i = 0; i < len; i++)
        {
            if (word[i] == 'A') aC++;
            else bC++;
        }
        if (aC > bC) cout << "A" << endl;
        else cout << "B" << endl;
    }
    
    return 0;
}
