#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin >> T;
    while (T--)
    {
        int n, c = 0; cin >> n; string s; cin >> s;
        for (int i = 0; i < n / 2; i++)
        {

            if ( (s[i] == '1' && s[n - (i + 1)] == '0') || (s[i] == '0' && s[n - (i + 1)] == '1') ) c++;
            else break;
        }
        cout << n - (c * 2) << endl;
    }

    return 0;
}