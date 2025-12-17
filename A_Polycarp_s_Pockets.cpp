#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c1=0,c2=0;
    cin >> n;
    int cn[n];
    int m = cn[0];
    for (int i = 0; i < n; i++)
    {
        cin >> cn[i];
        if( m != cn[i+1] ) c1++;
        else c2++;
    }
    cout << (c1/c1)+(c2/c2) << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> c(101);
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		++c[x];
	}
	
	cout << *max_element(c.begin(), c.end()) << endl;
	
	return 0;
}