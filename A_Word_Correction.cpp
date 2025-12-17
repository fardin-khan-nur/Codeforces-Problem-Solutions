#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}
int main() {
    int n; 
    cin >> n;
    string w, wc;
    cin >> w;

    for (int i = 0; i < n; i++) {
        if ( !(isVowel(w[i]) && i > 0 && isVowel(w[i - 1])) ) wc.push_back(w[i]);
    }
    cout << wc;
    
    return 0;
}
