#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0; cin >> n;
    string w; cin >> w;
    
    for (int i = 0; i < n - 1; i++) {
        if ( (w[i] == 'R' && w[i + 1] == 'U') || (w[i] == 'U' && w[i + 1] == 'R') ) {
            c++; 
            i++;
        }
    }
    
    cout << n - c << endl;
    return 0;
}