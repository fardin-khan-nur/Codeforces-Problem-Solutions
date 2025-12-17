#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string s;
        getline(cin, s);

        int o = 0, z = 0, m;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1') o++;
            else z++;
        }

        if (o > z) m = z;
        else m = o;

        if (m % 2 != 0) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
    return 0;
}