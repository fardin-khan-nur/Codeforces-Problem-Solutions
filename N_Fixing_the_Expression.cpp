#include<iostream>
using namespace std;
main(){
    int t;
    std::cin>> t;
    while(t--){
        string s;
        cin >> s;
        cout << s[0] << (s[0] > s[2] ? '>' : (s[0] == s[2] ? '=' : '<')) << s[2] << '\n';
        }
}
/// anothrt 
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int a = s[0] - '0';
        int b = s[2] - '0';
        char cmp = s[1];

        if ((cmp == '<' && a < b) || (cmp == '>' && a > b) || (cmp == '=' && a == b))
        {
            cout << s << endl;
        }
        else
        {
            if (cmp == '>' && a < b)
            {
                cout << b+1 << ">" << b << endl;
            }
            else if (cmp == '<' && a > b)
            {
                cout << b-1 << "<" << b << endl;
            }
            else if (cmp == '=')
            {
                if(a>b) cout << a << ">" << b << endl;
                else cout << a << "<" << b << endl;
            }
        }
    }

    return 0;
}
*/