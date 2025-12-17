#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int i = s.size() - 1;

    while (i >= 0 && !isalpha(s[i])) {
        i--;
    }

    if (i >= 0)
    {
        char lastChar = tolower(s[i]);
        if (lastChar == 'a' || lastChar == 'e' || lastChar == 'i' || 
            lastChar == 'o' || lastChar == 'u' || lastChar == 'y')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
