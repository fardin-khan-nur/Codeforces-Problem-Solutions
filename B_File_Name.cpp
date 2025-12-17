#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x') c++;
    }
    
    cout << c << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    
    for (int i = 0; i < n ; i++) {
        if (s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x') c++;
    }
    
    cout << c << endl;
    return 0;
}
