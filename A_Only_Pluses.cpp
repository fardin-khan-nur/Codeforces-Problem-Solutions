#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        for (int i=1 ; i<6 ; i++)
        {
        if (a<=b  && a<=c) a++;
        else if (c<=b  && c<=a) c++;
        else b++;
        }
            cout << a*b*c << endl;
    }
    return 0;
}
