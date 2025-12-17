#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    int u = 0, l = 0;
    cin >> str;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') u++;
        else if (str[i] >= 'a' && str[i] <= 'z') l++;
    }

    if (l >= u) transform(str.begin(), str.end(), str.begin(), ::tolower);
    else transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout << str << endl;
    return 0;
}