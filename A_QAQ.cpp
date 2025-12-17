#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int A = 0;
        if (s[i] == 'Q')
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == 'A') A++;
                if (s[j] == 'Q')c += A;
            }
        }
    }
    cout << c << endl;

    return 0;
}