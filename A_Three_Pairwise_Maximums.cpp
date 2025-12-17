#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    cin >> T;

    while (T--) {
        vector<int> a(3);
        for (int i = 0; i < 3; i++) cin >> a[i];
		sort(a.begin(), a.end());
        
		if (a[1] != a[2])
			cout << "NO" << endl;
        else
			cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
        
    }
    
    return 0;
}
