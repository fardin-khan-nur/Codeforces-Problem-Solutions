#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x=0;
    cin >> n;

    for (int i = 0; i < n; i++){
        string o;
        cin >> o;

        if (o[0] == '+' || o[1] == '+')
            x++;
        else
            x--;
    }
    cout << x << endl;
    return 0;
}
