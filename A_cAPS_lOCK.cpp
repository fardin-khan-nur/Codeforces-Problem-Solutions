#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool change = true;

    for (int i = 1; i < s.size(); i++) {
        if ( islower(s[i]) ) {
            change = false;
            break;
        }
    }

    if ( change ) {
        for (int i = 0; i < s.size(); i++) {
            if ( isupper(s[i]) )
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}
