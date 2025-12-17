#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        string b = "";
        
        for (int i = a.length() - 1; i >= 0; --i)
        {
            if (a[i] == 'q')
            {
                b += 'p';
            }
            else if (a[i] == 'p')
            {
                b += 'q';
            }
            else
            {
                b += a[i];
            }
        }

        cout << b << endl;
    }
    return 0;
}