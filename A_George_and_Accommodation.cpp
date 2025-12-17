#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, c=0;
    cin >> T;

    while (T--) {
        int x, y;
        cin >> x >> y;
        if( y-x >=2 ) c++;
    }
    cout << c << endl;
    return 0;
}

//Both correct 1st one easy effective way

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, c=0, m=0, mm=0;
    cin >> T;

    while (T--) {
        int x, y;
        cin >> x >> y;
        m = y-x;
        mm = max(m,mm);
        if(m>=2) c++;
    }
    cout << c << endl;
    return 0;
}