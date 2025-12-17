#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long achoda, bokachoda, chudirvai;
        cin >> achoda >> bokachoda >> chudirvai;

        if( chudirvai % 2 == 0){
            if( achoda > bokachoda )
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
        else {
            if( bokachoda > achoda )
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }
    }
    
    return 0;
}