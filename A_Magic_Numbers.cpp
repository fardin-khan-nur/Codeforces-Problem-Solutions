#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = to_string(n);

    for (int i = 0; i < s.size(); i++)
    {
        if (i + 2 < s.size() && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4') i += 2;
        else if (i + 1 < s.size() && s[i] == '1' && s[i + 1] == '4') i++;
        else if (s[i] == '1') continue;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}