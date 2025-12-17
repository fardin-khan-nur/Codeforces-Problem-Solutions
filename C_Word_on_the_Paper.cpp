#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        for (int i = 0; i < 64; i++)
        {
            char w;
            cin >> w;

            if (w != '.')s += w;
        }
        cout << s << endl;
    }
    return 0;
}