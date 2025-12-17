#include <iostream>
#include <string>

using namespace std;

bool isLuckyNumber(string num) {
    for (char c : num)
    {
        if (c != '4' && c != '7') return false;
    }
    return true;
}

int main() {
    string n;
    cin >> n;

    int luckyCount = 0;

    for (char c : n)
    {
        if (c == '4' || c == '7') luckyCount++;
    }

    if (isLuckyNumber(to_string(luckyCount))) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
