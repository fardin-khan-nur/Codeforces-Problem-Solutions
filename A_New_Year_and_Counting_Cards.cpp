#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') c++;
        else if (isdigit(s[i]) && (s[i] - '0') % 2 == 1) c++;
    }
    cout << c << endl;

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int c = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || (isdigit(c) && (c - '0') % 2 == 1)) {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
