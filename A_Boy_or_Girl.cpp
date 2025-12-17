#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cin >> name;
    unordered_set<char> unique_chars(name.begin(), name.end());
    
    if((unique_chars.size())%2==0 ) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}