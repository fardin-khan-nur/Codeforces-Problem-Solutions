#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        string target = "Timur";
        
        sort(target.begin(), target.end());
        sort(s.begin(), s.end());
        cout << (s == target ? "YES" : "NO") << endl;
    }
    return 0;
}
