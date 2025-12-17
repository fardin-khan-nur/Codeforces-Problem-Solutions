#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;

    while (T--) {
        string w; cin >> w;
        for( int i = 0; i < (w.size()-2); i++ ) cout << w.at(i);
        cout << "i" << endl;
    }
    return 0;
}

// Both Correct

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;

    while (T--) {
        string w; cin >> w;
        w = w.substr(0, w.size() - 2);
        cout << w << "i" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string w; 
        cin>>w;
        for(int i = 0; i < w.size()-2; i++)
            cout << w[i];
        cout << "i\n";
    }
    return 0;
}
