#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int pos = (max(x, y) * 2) - 1;
        if(x == y) pos++;
        cout << pos << endl;
    }
}