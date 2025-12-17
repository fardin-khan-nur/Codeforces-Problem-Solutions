#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string m;
    cin >> m;
    cout << n+1 << endl;
    
    return 0;
}
// Another One
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    
    cin >> n >> s;
    
    int L_c = 0, R_c = 0;
    for (char c : s)
    {
        if (c == 'L') L_c++;
        else if (c == 'R') R_c++;
    }
    
    cout << L_c + R_c + 1 << endl;
    
    return 0;
}
