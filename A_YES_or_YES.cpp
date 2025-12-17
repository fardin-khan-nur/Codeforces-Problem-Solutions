#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        string input;
        cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::tolower);

        if (input == "yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}