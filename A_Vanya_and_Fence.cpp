#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h;
    cin >> n >> h;
    int hp[n];
    int c=0;
    for (int i = 0; i < n; i++)
    {
        cin >> hp[i];
        if (hp[i] <= h) c+=1;
        else c+=2;
    }
    cout << c << endl;
    return 0;
}
