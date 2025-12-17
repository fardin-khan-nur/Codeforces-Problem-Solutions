#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    string c = s1 + s2;
    sort(c.begin(), c.end());
    sort(s3.begin(), s3.end());
    
    if (c == s3) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
