//! 1st Sol
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1 < str2) cout << -1 << endl;
    else if (str1 > str2) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}
//! 2nd Sol
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    for (char &c : str1) c = tolower(c);
    for (char &c : str2) c = tolower(c);

    cout << (str1 < str2 ? -1 : str1 > str2 ? 1 : 0) << endl;
    return 0;
}
