#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string b;
		cin >> b;

		string a = b.substr(0, 2);

		for (int i = 3; i < b.size(); i += 2) a += b[i];
		cout << a << endl;
    }
    return 0;
}
