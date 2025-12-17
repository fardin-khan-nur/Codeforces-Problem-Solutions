#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    set<char> letters;

    for (char c : input)
    {
        if (islower(c)) letters.insert(c);
    }
    cout << letters.size() << endl;
    return 0;
}